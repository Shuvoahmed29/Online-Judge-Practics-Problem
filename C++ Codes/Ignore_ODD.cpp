#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
// #define int long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		for(int i=0;i<n;i++){
			int k;	cin >> k;
			int sum = 0;
			while(k!=0){
				int r = k%10;
				if(r%2==0) sum+=r;
				k = k/10;
			}
			cout << sum << ' ';
		}
		cout << endl;
	}
}