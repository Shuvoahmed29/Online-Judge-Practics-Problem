#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int sum(int x){
	int add=0;
	while(x!=0){
		int r = x%10;
		add+=r;
		x=x/10;
	}
	return add;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int x,k;	cin >> x >> k;
		int sum1 = sum(x);
		if(sum1%k==0) cout << x << endl;
		else{
			bool ok = false;
			for(int i=x;i<x+1000;i++){
				int p = sum(i);
				if(p%k==0) {
					cout << i << endl;
					break;
				}
			}
		}
	}
}
