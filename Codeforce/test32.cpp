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
	//code();
	int tt;	cin >> tt;
	while(tt--){
		int x,y,k;	cin >> x >> y >> k;
		int dif = abs(x-y);
		int ans = min(x,y);
		while(k!=0){
			if(dif<=0) break;
			ans += k;
			dif -= k;
		}
		cout << ans << endl;
	}
}

