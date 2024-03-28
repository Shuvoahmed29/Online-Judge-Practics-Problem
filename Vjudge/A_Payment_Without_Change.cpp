#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int a,b,n,s;	cin >> a >> b >> n >> s;
		bool ok = false;
		if(s/n<=a){
			int r = s%n;
			if(r<=b) ok = true;
			else ok = false;
		}
		else{
			int p = n*a;
			int diff = s-p;
			if(diff<=b) ok = true;
			else ok=false;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}