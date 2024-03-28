#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,k;	cin >> n >> k;
		int total = 4*n-2;
		if(total == k)	cout << 2*n << endl;
		else if(k%2==0) cout << k/2 << endl;
		else cout << k/2 + 1 << endl;
	}
}