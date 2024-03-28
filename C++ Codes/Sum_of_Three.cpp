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
		if(n%3==0){
			if(n<=9)	cout << "NO\n";
			else{
				cout << "YES\n";
				cout << n-5 << " "<<1 <<" "<<4<< endl;
			}
		}
		else{
			if(n<=5) cout << "NO\n";
			else {
				cout << "YES\n";
				cout << n-3 << " "<<1 <<" "<<2<< endl;
			}
		}
	}
}
