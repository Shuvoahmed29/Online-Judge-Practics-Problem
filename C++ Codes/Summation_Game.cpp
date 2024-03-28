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
		vector<int> vec(n+1);
		for(int i=1;i<=n;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		vector<int>prefix(n+1);
		prefix[1] = vec[1];
		for(int i=2; i<=n; i++){
			prefix[i] = prefix[i-1]+vec[i];
		}
		int ans = INT_MIN;
		for(int i=n;i>=0;i--){
			int idx = n-i;
			if(idx>k) break;
			int p = min(i,x);
			int sum = (prefix[i-p]-(prefix[i]-prefix[i-p]));
			ans = max(ans,sum);
		}
		cout << ans << endl;
	}
}