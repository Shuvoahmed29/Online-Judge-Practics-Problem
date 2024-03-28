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
		double a,b,c;	cin >> a >> b >> c;
		double mini=min(a,b),mx=max(a,b);
		double avg=(a+b)/2;
		double dif=avg-mini;
		cout << ceil(dif/c) << endl;
	}
}
