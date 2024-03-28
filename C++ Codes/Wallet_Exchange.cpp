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
		int a,b;	cin >> a >> b;
		if( (a+b)%2 !=0) cout << "Alice\n";
		else cout << "Bob\n";
	}
}
