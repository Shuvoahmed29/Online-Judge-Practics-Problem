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
		int n,m;	cin >> n >> m;
		string x,s;	cin >> x >> s;
		bool ok=false;
		for(int i=0;i<10;i++){
			if(x.find(s)!=-1){
				ok = true;
				cout << i << endl;
				break;
			}
			x+=x;
		}
		if(ok==false) cout << -1 << endl;
	}
}
