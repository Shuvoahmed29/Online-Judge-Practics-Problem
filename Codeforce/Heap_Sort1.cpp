#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void heapify(int *arr,int n,int root){
	int mini = root;
	int left = 2*root+1;
	int right = 2*root+2;
	if(left<n && arr[left]<arr[mini]) mini = left;
	if(right<n && arr[right]<arr[mini]) mini = right;
	if(root != mini){
		swap(arr[mini],arr[root]);
		heapify(arr,n,mini);
	}
}
void heap_Sort(int *arr,int n){
	for(int i=0;i<n;i++)	heapify(arr,n,i);
	for(int i=n-1;i>=0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
}
int main(){
	code();
	int n;	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];
	heap_Sort(arr,n);
	for(int i=n-1;i>=0;i--)	cout << arr[i] << " ";
}
