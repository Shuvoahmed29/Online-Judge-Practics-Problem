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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tt,k,n,mx;	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int>vec(n);
		vector<int>frq(n+2,0);	
		mx=0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(vec[i]>n) continue;
			frq[vec[i]]++;
		}
		mx=0;
		for(int i=1;i<=n;i++){
			int ans = 0;
			for(int j=1;j*j<=i;j++){
				if(i%j==0){
					ans += frq[j];
					if(j*j != i)
						ans += frq[i/j];
				}
			}
			mx = max(ans,mx);
		}
		cout << mx << endl;
	}
	
}
