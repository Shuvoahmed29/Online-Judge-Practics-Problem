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
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		int p = 0;
		int ans = 0;
		for(int k=1;k<n;k++){
			if(n%k != 0) continue;
			int mn = LLONG_MAX, mx = LLONG_MIN;
			for(int i = 0;i<n; i+=k){
				for(int j=i;j<i+k;j++) p+=vec[j];
				mx = max(mx,p);
				mn = min(mn,p);
				p = 0;
			}
			ans = max(ans,mx-mn);
		}
		cout << ans << endl;
	}
}
