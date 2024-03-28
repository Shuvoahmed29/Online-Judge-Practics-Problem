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
		int a,b,c;	cin >> a >> b >> c;
		int mini = min(a,min(b,c));
		bool ok = true;
		if(a%mini!=0 && b%mini!=0 && c%mini!=0) ok = false;
		int cunt=0;
		while(a!=mini){
			if(cunt>3 or a%mini!=0){
				ok=false;
				break;
			}
			a -= mini;
			cunt++;
		}
		while(b!=mini){
			if(cunt>3 or b%mini!=0){
				ok=false;
				break;
			}
			b -= mini;
			cunt++;
		}
		while(c!=mini){
			if(cunt>3 or c%mini!=0){
				ok=false;
				break;
			}
			c -= mini;
			cunt++;
		}
		if(cunt<=3 && ok) cout << "YES\n";
		else cout << "NO\n";
	}
}