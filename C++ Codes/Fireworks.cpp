#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int a,b,m;	cin >> a >> b >> m;
		cout << (m/a + 1) + (m/b + 1) << endl;
	}
}