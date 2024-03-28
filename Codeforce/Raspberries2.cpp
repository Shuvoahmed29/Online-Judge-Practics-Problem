#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
//#define int long long
int32_t main(){
	//code();
	int tt;	cin >> tt;
	while(tt--){
		 int n, k; cin >> n >> k;
    	int ans = k, t = 1, e = 0;
    	for (int i = 0; i < n; i++) {
        	int x;
        	cin >> x;
        	if (x % 2 == 0) e++;
        	if (x % k == 0) ans = 0;
        	ans = min(ans, k - x % k);
    	}
    	if (k == 4) {
        	if (e >= 2) ans = 0;
        	else if (e == 1)	ans = min(ans, 1);
        	else  ans = min(ans, 2);
    	}
    	cout << ans << endl;
	}
}
