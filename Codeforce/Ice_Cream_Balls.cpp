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
		double p = (1+sqrt(1+(4*2*n)))/2;
		int k = p;
		if(n==0){
			cout << 0 << endl;
			continue;
		}
		if(k==p){
			cout << k << endl;
			continue;
		}
		int x = (k*(k-1))/2;
		int q = abs(n-x);
		cout << k+q << endl;
	}
}
