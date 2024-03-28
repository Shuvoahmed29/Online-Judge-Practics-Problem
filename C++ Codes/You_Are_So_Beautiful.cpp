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
		map<int,int>mp,first,last;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(mp[vec[i]]==0){
				mp[vec[i]]++;
				first[vec[i]] = i;
				last[vec[i]] = i;
			}
			else last[vec[i]] = i;
		}
		int ans = 0,sum = 0;
		for(int i=0;i<n;i++){
			if(first[vec[i]] == i) sum++;
			if(last[vec[i]] == i) ans += sum;
			// cout << sum << " "<<ans << endl;
		}
		cout << ans << endl;
	}
}
