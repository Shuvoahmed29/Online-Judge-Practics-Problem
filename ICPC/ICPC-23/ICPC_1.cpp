#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int MOD = 1e12+9;
int calculate(int a,int n){
	int ans = 0;
	for(int i=1;i<=n;i++){
		int temp = abs(i%a-i%(a-1));
		ans = (ans+temp)%MOD;
	}
	return ans;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	for(int i=1;i<=tt;i++){
		int a,b;	cin >> a >> b;
		int ans = calculate(a,b);
		cout << "Case "<<i << ": "<<ans << endl;
	}
}
