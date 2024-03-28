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
		bool ok = true;
		int cunt = 0,p;
		for(int i=1;i<=n;){
			p = (1<<cunt);
			vector<int>vec2;
			while(i<=p && i<=n){
				vec2.push_back(vec[i-1]);
				i++;
			}
			for(int j=1;j<vec2.size();j++){
				if(vec2[j-1]>vec2[j]){
					ok = false;
					break;
				}
			}
			cunt++;
			if(!ok) break;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
