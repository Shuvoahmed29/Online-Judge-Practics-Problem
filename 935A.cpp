#include<bits/stdc++.h>
using namespace std;
int main(){
	int tt;	cin >> tt;
	while(tt--){
		int a,b,c;	cin >> a >> b >>c;
		int ans = a;
		int r = b%3;
		if(r==0) {
			ans +=b/3;
			if(c%3==0) ans+=c/3;
			else ans+=c/3+1;
			cout << ans << endl;
		}
		else if(c>=3-r){
			b+=(3-r);
			c-=(3-r);
			ans+=b/3;
			if(c%3==0) ans+=c/3;
			else ans+=c/3+1;
			cout << ans << endl;
		}
		else cout << -1 << endl;
	}
}