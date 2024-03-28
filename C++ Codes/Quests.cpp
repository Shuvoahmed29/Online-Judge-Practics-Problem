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
		vector<int>vec(n),vec2(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		for(int i=0;i<n;i++)	cin >> vec2[i];
		vector<int>diff(n+10);
		diff[0] = vec2[0];
		for(int i=1;i<n;i++){
			diff[i] = max(diff[i-1],vec2[i]);
		}
		int ans = 0,total = 0;
		for(int i=0;i<min(n,k);i++){
			total +=vec[i];
			int r = k-(i+1);
			int p = total+r*diff[i];

			ans = max(ans,p);
		}
		cout << ans << endl;
	}
}
