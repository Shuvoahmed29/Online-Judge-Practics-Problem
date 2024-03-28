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
		int n,k,x;	cin >> n >> k >> x;
		int mini = k*(k+1)/2;
		int diff = n-k;
		int maxi = n*(n+1)/2 - diff*(diff+1)/2;
		if(x<mini || x>maxi) cout << "NO\n";
		else cout << "YES\n";
	}
}
