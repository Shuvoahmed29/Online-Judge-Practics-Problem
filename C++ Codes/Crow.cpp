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
		int x,y;	cin >> x >> y;
		double t1 = (2*3.14159*6444)/x;
		double t2 = (2*3.14159*6444)/y;
		if(t1>=72 && t2>=72) cout << "YES\n";
		else cout << "NO\n";
	}
}

