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
		map<int,int>mp;
		while(n--){
			int d,s;	cin >> d >> s;
			int p = ceil((s/2.0)-1);
			if(p<0) p=0;
			mp[d]=p;
		}
		int cunt=0;
		// for(int i=1;;i++){
			
		// }
	}
}
