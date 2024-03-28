#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,k;	cin >> n >> k;
		for(int i=n-k;i<=n;i++) cout << i << ' ';
		for(int i=n-k-1;i>=1;i--) cout << i << ' ';
		cout << endl;
	}
}
