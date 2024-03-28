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
		int n,k;	cin >> n >> k;
		int ans = 1, p;
		for(int i=0;i<n;i++){
			cin >> p;
			ans *= p;
		}
		if(2023%ans == 0){
			cout << "YES\n";
			cout << 2023/ans << ' ';
			for(int i=1;i<k;i++)
				cout << 1 << ' ';
			cout << endl;
		}
		else cout << "NO\n";
	}
}
