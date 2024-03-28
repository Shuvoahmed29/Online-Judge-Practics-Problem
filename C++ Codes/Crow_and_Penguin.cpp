#include<bits/stdc++.h>
using namespace std;
int main(){
	const unsigned int MOD = 1000000007;
	int tt;	cin >> tt;
	while(tt--){
		int n,x;	cin >> n >> x;
		vector<int>vec(n+10);
		vec[0] = 1;
		vec[1] = 1;
		for(int i=2;i<=n;i++){
			vec[i] = (vec[i-1]+vec[i-2])%MOD;
		}
		int ans = vec[n]*x;
		cout << ans%MOD << endl;
	}
}