#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int M = 2e5+50;
int zero[M];
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<=n+2;i++)	zero[i]=0;
		for(int i=0;i<n;i++) cin >> vec[i];
		for(int i=n-1;i>=0;i--){
			zero[i]=zero[i+1];
			if(vec[i]>=0) zero[i]+=vec[i];
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(i%2==0) ans = max(ans,zero[i+1]+vec[i]);
			else ans = max(ans,zero[i+1]+0);
		}
		cout << ans << endl;
	}
}
