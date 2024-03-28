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
		int n,p;	cin >> n >> p;
		int arr[n],brr[n];
		for(int i=0;i<n;i++)	cin >> arr[i];
		int ans = p;
		vector<pair<int,int>>vec;
		for(int i=0;i<n;i++){
			cin >> brr[i];
			vec.push_back({min(p,brr[i]),arr[i]});
		}
		sort(vec.begin(),vec.end());
		for(auto it:vec){
			cout << it.first << " "<<it.second << endl;
		}
		int person = n-1;
		for(int i=0;i<n-1;i++){
			ans += min(vec[i].second,person)*vec[i].first;
			person -= min(person,vec[i].second);
		}
		cout << ans << endl;
	}
}
