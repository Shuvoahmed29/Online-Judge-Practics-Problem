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
		int n,m;	cin >> n >> m;
		int g = __gcd(n,m);
		int r = n%m;

		int m1 = m/g;
		if( __builtin_popcount(m1)>1 ){
			cout << -1 << endl;
			continue;
		}
		
		int cunt=0;
		while(r){
			cunt+=r;
			r = r*2;
			if(r>=m) r-=m;
		}
		cout << cunt << endl;
	}

}
