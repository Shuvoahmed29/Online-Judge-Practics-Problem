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
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			mp[vec[i]]++;
		}
		sort(vec.begin(),vec.end());
		int total = 0;
		for(auto it:mp){
			int k = it.second;
			total += k*(k-1)*(k-2)/6;
			int idx = lower_bound(vec.begin(),vec.end(),it.first)-vec.begin();
			total += (k*(k-1)/2)*idx;
		}
		cout << total << endl;
	}
}
