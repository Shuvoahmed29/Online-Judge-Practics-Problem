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
		int a, b;	cin >> a >> b;
		if(b>a)	swap(a,b);
		int ans = 0;
		if(a == b) cout << 0 << endl;
		else{
		while(a>b){
			if(a/8 >= b && a%8 == 0){
				ans++;
				a = a/8;
			}
			else if(a/4 >= b && a%4 == 0){
				ans++;
				a = a/4;
			}
			else if(a/2 >= b && a%2 == 0){
				ans++;
				a = a/2;
			}
			else break;
		}
		if(a == b)	cout << ans << endl;
		else cout << -1 << endl;
	}
	}
}
