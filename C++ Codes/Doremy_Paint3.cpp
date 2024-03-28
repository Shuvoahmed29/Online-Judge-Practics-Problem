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
		for(int i=0;i<n;i++) {
			cin >> vec[i];
			mp[vec[i]]++;
		}
		if(mp.size()==1) cout << "YES\n";
		else if(mp.size()>=3) cout << "NO\n";
		else{
			vector<int>vec1;
			for(auto it:mp){
				vec1.push_back(it.second);
			}
			int diff = abs(vec1[0]-vec1[1]);
			if(diff<=1) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
