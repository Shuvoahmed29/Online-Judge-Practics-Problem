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
		int ans = 0, even=0, odd=0;
		for(int i=0;i<n;i++){
			int x; cin >> x;
			ans += x;
			if(x%2==1) odd++;
			else even++;
			int d = odd/3;
			if(even==0 && odd==1) d=0;
			else if(odd%3 == 1) d = (odd+2)/3;
			cout << ans - d << ' ';
		}
		cout << endl;
	}
}
