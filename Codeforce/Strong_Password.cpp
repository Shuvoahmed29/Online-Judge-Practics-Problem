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
		int n,k,x;	cin >> n >> k >> x;
		if(x!=1){
			cout << "YES\n";
			cout << n << endl;
			for(int i=0;i<n;i++) cout << 1 << " ";
			cout << endl;
			continue;
		}
		if(n%2==0 && 2<=k){
			cout << "YES\n";
			cout << n/2 << endl;
			for(int i=0;i<n/2;i++) cout << 2 << ' ';
			cout << endl;
			continue;
		}
		if(3<=k){
			cout << "YES\n";
			cout << n/2 << endl;
			cout << 3 << " ";
			for(int i=0;i<n/2-1;i++) cout << 2 << ' ';
			cout << endl;
			continue;
		}
		cout << "NO\n";
	}
}
