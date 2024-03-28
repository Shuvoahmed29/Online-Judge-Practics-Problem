#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int a,b;	cin >> a >> b;
		if(a%2!=0 && b%2!=0) cout << "NO\n";
		else if(a%2==0 && b%2==0) cout << "YES\n";
		else{
			int x;
			if(a%2==0) x = a;
			else x = b;
			int y;
			if (a % 2 == 0) y = b;
			else y = a;
			x = x/2;
			if(x==y) cout << "NO\n";
			else cout << "YES\n";
		}
	}
}