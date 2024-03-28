#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int n;	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];
	// for(int i=0;i<n;i++){
	// 	int mini = arr[i];
	// 	int idx=i;
	// 	for(int j=i+1;j<n;j++){
	// 		if(arr[j]<mini){
	// 			mini = arr[j];
	// 			idx = j;
	// 		}
	// 	}
	// 	swap(arr[i],arr[idx]);
	// }
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i])swap(arr[i],arr[j]);
		}
	}
	for(int i=0;i<n;i++)	cout << arr[i] << " ";
}
