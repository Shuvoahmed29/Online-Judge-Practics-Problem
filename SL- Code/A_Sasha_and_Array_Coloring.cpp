#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++) 
			cin >> vec[i];
		sort(vec.begin(),vec.end());
		int ans = 0;
		for(int i=0;i<n/2;i++){
			ans+=(vec[n-i-1]-vec[i]);
		}
		cout << ans << endl;

	}
}