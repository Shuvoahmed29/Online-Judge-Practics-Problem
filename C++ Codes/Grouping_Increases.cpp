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
		int s = 1e10,t = 1e10;
		int ans = 0;
		for(int i=0;i<n;i++){
			if(s>t) swap(s,t);
			if(vec[i]<=s) s = vec[i];
			else if(vec[i]<=t) t = vec[i];
			else{
				s = vec[i];
				ans ++;
			}
		}
		cout << ans << endl;
	}
}