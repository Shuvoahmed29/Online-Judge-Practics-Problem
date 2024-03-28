#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void printBinary(int n){
	for(int i=10;i>=0;i--){
		cout << ((n>>i)&1);
	}
	cout << endl;
}
int main(){
	code();
	for(int i=0;i<8;i++){
		printBinary(i);
		if(i&1) cout << "Odd\n";
		else cout << "Even\n";
	}
	int n = 90;
	if(n&1) cout << "Odd\n";
	else cout << "Even\n";
}
