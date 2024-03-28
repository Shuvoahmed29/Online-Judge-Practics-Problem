#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;	cin >> tt;
	map<pair<pair<int,int>,int>,string>mp;
	for(int i=1;i<=tt;i++){
		int x,y,z;	cin >> x >> y >> z;
		string str; cin >> str;
		mp[{{x,y},z}] = str;
	}
	int t;	cin >> t;
	while(t--){
		int x,y,z; cin >> x >> y >> z;
		cout << mp[{{x,y},z}] << endl;
	}
}