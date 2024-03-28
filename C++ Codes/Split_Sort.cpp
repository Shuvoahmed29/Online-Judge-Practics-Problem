#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int count1=0;
int pivot_index(int *arr,int first,int last){
	int pivot = arr[first];
	int cunt = 0;
	for(int i=first+1;i<=last;i++){
		if(arr[i] <= pivot) cunt++;
	} 
	int index = cunt+first;
	swap(arr[first],arr[index]);
	int i=first,j=last;
	while(i < index && j>index){
		while(arr[i]<pivot) i++;
		while(arr[j]>pivot) j--;
		if(i < index && j>index){
			swap(arr[i++],arr[j--]);
		}
	}
	return index;
}
void quickSort(int *arr,int first,int last){
	if(first >= last) return;
	int p = pivot_index(arr,first,last);
	count1++;
	quickSort(arr,first,p-1);
	quickSort(arr,p+1,last);
}
int main(){
	code();
	int n;	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];
	quickSort(arr,0,n-1);
	cout << count1 << endl;
	for(int i=0;i<n;i++) cout << arr[i] << " ";
}