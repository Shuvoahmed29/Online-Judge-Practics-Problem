#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n,day,temp;	cin >> n >> day >> temp;
		vector<int>vec(n),vec1;
		int cunt=0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(vec[i]<=temp) {
				cunt++;
				vec1.push_back(vec[i]);
			}
		}
		int ans = cunt/day;
		if(cunt!=1)ans = 2*ans;
		for(int i=0;i<cunt-1;i++){
			if(vec1[i]==vec1[i+1]) ans--;
		}
		cout << ans << endl;
	}
}