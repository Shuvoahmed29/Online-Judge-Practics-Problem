#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void marge(int *arr,int first,int last){
	int mid = (first+last)/2;
	int len1 = mid-first+1;
	int len2 = last - mid;
	int arr1[len1],arr2[len2];
	int index = first;
	for(int i=0;i<len1;i++){
		arr1[i] = arr[index++];
	}
	index = mid+1;
	for(int i=0;i<len2;i++){
		arr2[i] = arr[index++];
	}
	int idx1=0,idx2=0;
	index = first;
	while(idx1 <len1 && idx2<len2){
		if(arr1[idx1]<arr2[idx2]){
			arr[index++] = arr1[idx1++];
		}
		else arr[index++] = arr2[idx2++];
	}
	while(idx1<len1){
		arr[index++] = arr1[idx1++];
	}
	while(idx2<len2){
		arr[index++] = arr2[idx2++];
	}
}
void margeSort(int *arr,int first,int last){
	if(first>=last) return;
	int mid = (first+last)/2;
	margeSort(arr,first,mid);
	margeSort(arr,mid+1,last);
	marge(arr,first,last);
}
int main(){
	code();
	int n;	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];
	margeSort(arr,0,n-1);
	for(int i=0;i<n;i++) cout << arr[i] << " ";
}
