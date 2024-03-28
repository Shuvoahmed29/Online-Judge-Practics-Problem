#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
map<int,int>Factor;
void primeFactor(int n){
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			n = n/i;
			Factor[i]++;
		}
	}
	if(n>1) Factor[n]++;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		Factor.clear();
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin >> vec[i];
			primeFactor(vec[i]);
		}
		bool ok = true;
		for(auto it:Factor){
			if(it.second % n != 0) ok=false;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
