#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void printBinary(int n){
	for(int i=31;i>=0;i--){
		cout << ((n>>i)&1);
	}
	cout << endl;
}
int main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,x;	cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			cout << x << endl;
		}
	}
}
