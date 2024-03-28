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
		int p = 0,ans = 0;
		for(int i=0;i<n;i++){
			if(vec[i] > p) ans += vec[i] - p;
			p = vec[i];
		}
		cout << ans - 1 << endl;
	}
}
