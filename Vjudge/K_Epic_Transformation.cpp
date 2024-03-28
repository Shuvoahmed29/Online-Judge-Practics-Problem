#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			mp[vec[i]]++;
		}
		int mx=-1;
		for(auto it:mp){
			mx = max(mx,it.second);
		}
		int k = n-mx;
		if(mx <= k && n%2==0) cout << 0 << endl;
		else if(mx<=k && n%2!=0) cout << 1 << endl;
		else if(mx>k){
			cout << mx-k << endl;
		}
	}
}