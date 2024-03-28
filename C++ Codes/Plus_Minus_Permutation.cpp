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
		int n,x,y;	cin >> n >> x >> y;
		int cunt1=n/x,cunt2=n/y;
		int lcm = (x*y)/__gcd(x,y);
		int total_common = n/lcm;
		cunt1 = cunt1-total_common;
		cunt2 = cunt2-total_common;
		// cout << cunt1 << " " << cunt2 << endl;
		int total=n*(n+1)/2;
		cunt1 = n-cunt1;
		int x1 = cunt1*(cunt1+1)/2;
		// cout << "Total : " << total << endl;
		// cout << "x1 : " << x1 << endl;
		x1 = total-x1;
		int y1 = cunt2*(cunt2+1)/2;
		cout << x1-y1 << endl;
	}
}
