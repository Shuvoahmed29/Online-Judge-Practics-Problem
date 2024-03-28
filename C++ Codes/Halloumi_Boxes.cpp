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
		int n,k;	cin >> n >> k;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		if(k>=2) cout << "YES\n";
		else{
			vector<int> p = vec;
			sort(p.begin(),p.end());
			if(vec == p){
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
		
	}
}
