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
		int sum=0;
		for(int i=0;i<n;i++) {
			cin >> vec[i];
			sum+=vec[i];
		}
		int ans = sum;
		sort(vec.rbegin(),vec.rend());
		for(auto it:vec) cout << it << " ";
		cout << endl;
		int ans1=0,k=0,r=0;
		for(int i=0;i<n;i++){
			ans1+=vec[i];
			sum -=vec[i];
			if(ans1>sum){
				k = ans1-sum;
				k++;
				k = k/2;
			}
			r = sum+k;
			k = 0;
			ans = min(ans,i+1+r);
		}
		cout << ans << endl;

	}
}
