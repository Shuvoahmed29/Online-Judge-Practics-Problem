#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void bucket_sort(float *arr,int n){
	vector<float>vec[n];
	for(int i=0;i<n;i++){
		int idx = arr[i]*n;
		vec[idx].push_back(arr[i]);
	}
	for(int i=0;i<n;i++){
		sort(vec[i].begin(),vec[i].end());
	}
	int idx=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<vec[i].size();j++){
			arr[idx++] = vec[i][j];
		}
	}
}
int main(){
	code();
	int n;	cin >> n;
	float arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];
	bucket_sort(arr,n);
	for(int i=0;i<n;i++)	cout << arr[i] << " ";
}
