#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;	cin >> tt;
	map<pair<int,int>,string> mp;
	for(int i=1;i<=tt;i++){
		int x,y;	cin >> x >> y;
		string str;	cin >> str;
		mp[{x,y}] = str;
	}
	int t;	cin >> t;
	while(t--){
		int x,y;	cin >> x >> y;
		cout << mp[{x,y}] << endl;
	}
}