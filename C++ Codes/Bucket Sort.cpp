#include<bits/stdc++.h>
using namespace std;
void bucketSort(float *arr,int n){
	vector<float>vec[n];
	for(int i=0;i<n;i++){
		int idx = arr[i]*n;
		vec[idx].push_back(arr[i]);
	}
	for(int i=0;i<n;i++){
		sort(vec[i].begin(),vec[i].end());
	}
	int index = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<vec[i].size();j++){
			arr[index++] = vec[i][j];
		}
	}
}
int main(){
	int n;	cin >> n;
	float arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];
	bucketSort(arr,n);
	for(int i=0;i<n;i++) cout << arr[i] << " ";
}

