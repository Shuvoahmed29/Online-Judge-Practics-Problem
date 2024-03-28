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
		string a,b,c;	cin >> a >> b >> c;
		bool ok = false;
		for(int i=0;i<n;i++){
			if(a[i]!=c[i] && b[i] != c[i]){
				ok =  true;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
