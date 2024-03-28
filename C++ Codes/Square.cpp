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
		int a1,b1;	cin >> a1 >> b1;
		int a2,b2;	cin >> a2 >> b2;
		int a3,b3;	cin >> a3 >> b3;
		int a4,b4;	cin >> a4 >> b4;
		int ans = 1;
		if(a1 == a3) ans *= abs(b1-b3);
		else ans *= abs(a1-a3);
		if(a2 == a4) ans *= abs(b2-b4);
		else ans *= abs(a2-a4);
		cout << ans << endl;
	}
}
