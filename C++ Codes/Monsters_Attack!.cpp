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
		int n,k;	cin >> n >> k;
		vector<int>health(n),position(n+1,0);
		for(int i=0;i<n;i++)	cin >> health[i];
		for(int i=0;i<n;i++){
			int x;	cin >> x;
			position[abs(x)]+=health[i];
		}
		int bullet = k;
		bool ok = true;
		for(int i=1;i<=n;i++){
			bullet -=position[i];
			if(bullet<0) ok = false;
			bullet+=k;
		}
		if(ok)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}