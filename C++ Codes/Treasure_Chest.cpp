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
		int x,y,k;	cin >> x >> y >> k;
		if(x>y){
			cout << x << endl;
			continue;
		}
		int diff = (y-x);
		int ans = x;
		if(diff<=k) ans += diff;
		else ans += k+(diff-k)*2;
		cout << ans << endl;
	}
}
