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
		for(int i=0;i<n;i++) cin >> vec[i];
		int sum = vec[0];
		int ans = vec[0];
		for(int i=1;i<n;i++){
			if(sum<0) sum = 0;
			if((vec[i]%2 !=0 and vec[i-1]%2 == 0) || (vec[i]%2 ==0 and vec[i-1]%2 != 0)) {
				sum+=vec[i];
			}
			else sum = vec[i];
			ans = max(ans,sum);
		}
		cout << ans << endl;
	}
}
