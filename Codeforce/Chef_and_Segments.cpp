#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int M = 1e9+7;
#define int long long
// int multi(vector<int>vec,int l,int r,int m){
// 	int ans = 1;
// 	for(int i=l;i<=r;i++){
// 		ans = (ans*vec[i])%m;
// 	}
// 	return ans%m;
// }
int32_t main(){
	code();
	int n;	cin >> n;
	vector<int>vec(n+1),mul(n+1);
	mul[0] = 1;
	for(int i=1;i<=n;i++){
		cin >> vec[i];
		mul[i] = (mul[i-1]*vec[i])%M;
	}
	// mul.erase(mul.begin());
	// for(auto it:mul) cout << it << " ";
	// cout << endl;
	int tt;	cin >> tt;
	while(tt--){
		int l,r,m;	cin >> l >> r >> m;
		int ans = mul[r]-mul[l-1]+1;
		cout << ans%m << endl;
	}
}
