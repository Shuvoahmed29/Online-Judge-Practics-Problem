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
		int sum = 0,a;
		for(int i=0;i<n;i++){
			cin >> a;
			sum += a;
		}
		int k = sqrt(sum);
		if(k*k == sum)	cout << "YES\n";
		else cout << "NO\n";
	}
}
