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
	int arr[n],index[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		index[i] = i;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[index[i]] > arr[index[j]])
				swap(index[i],index[j]);
		}
	}
	for(int i=0;i<n;i++){
		cout << arr[index[i]] << " ";
	}
}
