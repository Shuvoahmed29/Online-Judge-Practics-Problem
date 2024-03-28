#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,m,k;	cin >> n >> m >> k;
		vector<int>vec(n),vec2(m);
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			mp[vec[i]] = 1;
		}
		for(int i=0;i<m;i++)	{
			cin >> vec2[i];
			if(mp[vec2[i]] == 1) mp[vec2[i]] = 4;
			else if(mp[vec2[i]] == 0) mp[vec2[i]] = 2;
		}
		int a = k/2,b = k/2;
		for(int i=1;i<=k;i++){
			if(mp[i] == 1) a--;
			if(mp[i] == 2) b--;
			if(mp[i] == 0) a=-1;
		}
		if(a>=0 && b>=0) cout << "YES\n";
		else cout << "NO\n";
	}
}