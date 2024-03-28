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
		int n;	cin >> n;
		vector<int>vec(n),vec2;
		for(int i=0;i<n;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		vec.erase(unique(vec.begin(), vec.end()), vec.end());
		int mx = 1;
		for(int i=0;i<vec.size();i++){
			int k = vec[i]+n;
			int it = lower_bound(vec.begin(),vec.end(),k)-vec.begin()-i;
			mx = max(mx,it);
		}
		cout << mx << endl;
	}
}