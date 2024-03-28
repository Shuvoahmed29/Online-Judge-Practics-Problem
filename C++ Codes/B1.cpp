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
		int n;	cin >> n;
		map<int,int>mp;
		int mini = INT_MAX;
		while(n--){
			int d,s;	cin >> d >> s;
			int p = ceil((s/2.0)-1);
			// cout << p << endl;
			if(p<0) p=0;
			mp[d]=p+d;
			mini=min(p+d,mini);
		}
		int cunt=0;
		// int gcd=__gcd(10,92);
		// int lcm=(10*92)/gcd;
		// cout << gcd << endl;
		// int mini = INT_MAX;
		// for(auto it:mp){
		// 	cout << it.first << " " << it.second << endl;
		// }
		// for(auto it:mp){
		// 	mini = min(mini,it.second);
		// }
		cout << mini << endl;
	}
}
