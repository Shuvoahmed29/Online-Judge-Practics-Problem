#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;	cin >> tt;
	pair<pair<int,int>,string> p[tt];
	for(int i=1;i<=tt;i++){
		int x,y;	cin >> x >> y;
		string str;	cin >> str;
		p[i].first.first = x;
		p[i].first.second = y;
		p[i].second = str;
	}
	int t;	cin >> t;
	while(t--){
		int x,y;	cin >> x >> y;
		for(int i=1;i<=tt;i++){
			if(p[i].first.first==x && p[i].first.second == y){
				cout << p[i].second << endl;
				break;
			}
		}
	}
}