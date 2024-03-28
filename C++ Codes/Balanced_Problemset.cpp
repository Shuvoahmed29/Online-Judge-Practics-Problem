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
		int x,n;	cin >> x >> n;
		int p = -1;
		for(int i=1;i*i<=x;i++){
			if(x%i == 0 && x/i >= n) p=max(p,i);
            if(x%i == 0 && i >= n) p=max(p,x/i);
		}
		cout << p << '\n';
	}
}