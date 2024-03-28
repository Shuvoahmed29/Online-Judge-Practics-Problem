#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
// #define int long long
void printBinary(int n){
	for(int i=31;i>=0;i--){
		cout << ((n>>i)&1);
	}
	cout << endl;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int x;	cin >> x;
		if(x>1 && (x&1)!=0){
			cout << 1 << endl;
			continue;
		}
		else if(x==1){
			cout << 3 << endl;
			continue;
		}
		// printBinary(x);
		int p = -1;
		for(int i=0;i<=31;i++){
			if((x & (1<<i))!=0){
				p = i;
				break;
			}
		}
		int ans = (1<<p);
		if(ans == x) cout << ans + 1 << endl;
		else cout << ans << endl;
		// for(int i=0;i<10;i++){
		// 	cout <<x<<" : "<< (x&i) << endl;
		// }
	}
}
