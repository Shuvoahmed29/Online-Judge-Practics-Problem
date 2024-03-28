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
		int n,k;	cin >> n >> k;
		vector<int>vec(n+10);
		multiset<int>st;
		for(int i=1;i<=n;i++) {
			cin >> vec[i];
			st.insert(vec[i]);
		}
		int ans = *st.begin();
		if(k == 0) cout << ans << endl;
		else if(k==1){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					int diff = abs(vec[i]-vec[j]);
					ans = min(ans,diff);
				}
			}
			cout << ans << endl;
		}
		else if(k==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					int diff = abs(vec[i]-vec[j]);
					ans = min(ans,diff);
					auto it = st.lower_bound(diff);
					if(it != st.end()) ans = min(ans, *it-diff);
					if(it != st.begin()) {
						it = prev(it);
						ans = min(ans, diff - *it);
					}
				}
			}
			cout << ans << endl;
		}
		else cout << 0 << endl;
	}
}
