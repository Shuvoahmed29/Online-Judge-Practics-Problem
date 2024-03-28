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
		k = min(n,k);
		vector<int>vec(n);
		for(int i=0;i<n;i++) cin >> vec[i];
		int last = n-1;
		bool ans = true;
		for(int i=0;i<k;i++){
			if(vec[last]>n){
				ans = false;
				break;
			}
			int diff = n - vec[last];
			last = (last+diff)%n;
		}
		if(ans) cout << "Yes\n";
		else cout << "No\n";
	}
}
