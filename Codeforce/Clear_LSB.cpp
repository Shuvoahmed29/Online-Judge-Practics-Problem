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
	printBinary(58);
	//Unset last i bit
	int i=3;
	int b = (58 & (~((1<<(i+1))-1)));
	printBinary(b);
}
