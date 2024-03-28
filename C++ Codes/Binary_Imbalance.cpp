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
		string str;	cin >> str;
		int zero = 0, one = 0;
		for(int i=0;i<n;i++){
			if(str[i]=='0') zero++;
			else one++;
		}
		bool ok = false;
		for(int i=0;i<n-1;i++){
			if(str[i]!=str[i+1]) {
				ok = true;
				break;
			}
		}
		if(zero > one || ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
