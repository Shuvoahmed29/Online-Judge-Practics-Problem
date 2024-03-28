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
	vector<int>vec(n);
	for(int i=0;i<n;i++)	cin >> vec[i];
	vector<vector<int>> subset;
	int total = (1<<n);
	for(int i=0;i<total;i++){
		vector<int>v;
		for(int j=0;j<n;j++){
			if((i&(1<<j)) != 0) v.push_back(vec[j]);
		}
		subset.push_back(v);
	}
	for(auto it:subset){
		for(auto ele:it){
			cout << ele << " ";
		}
		cout << endl;
	}
}
