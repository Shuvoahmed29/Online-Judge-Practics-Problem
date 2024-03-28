#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n,k;	cin >> n >> k;
		k = min(k,30);
		int ans = pow(2,k);
		ans = min(n+1,ans);
		cout << ans << endl;
	}
}