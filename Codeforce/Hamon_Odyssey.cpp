#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n),vec1;
		int ans=0,p=1;
		for(int i=0;i<n;i++)	cin >> vec[i];
		for(int i=0;i<n-1;i++){
			vec1.push_back(vec[i+1]&vec[i]);
		}
		for(auto it:vec1) cout << it << " ";
		cout << endl;
	}
}