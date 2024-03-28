#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tt,k,n,mx;	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int>vec(n);
		map<int,int>mp;
		mx=0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			k = vec[i];
			if(k>n) continue;
			for(int j=k;j<=n;j=j+k){
				mp[j]++;
				mx = max(mx,mp[j]);
			}
		}
		cout << mx << '\n';
	}
}
