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
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,k;	cin >> n >> k;
		string str;	cin >> str;
		map<char,int>mp;
		for(int i=0;i<n;i++){
			mp[str[i]]++;
		}
		int cunt = 0;
		for(auto it:mp){
			if(it.second%2 !=0)	cunt++;
		}
		if(cunt-1<0) cunt = 0;
		else cunt = cunt-1;

		if(k>=cunt && k<=n){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}
