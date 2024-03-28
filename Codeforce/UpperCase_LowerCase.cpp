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
	for(char c='A';c<='D';c++){
		cout << c << " : ";
		printBinary(c);
	}
	for(char c='a';c<='d';c++){
		cout << c << " : ";
		printBinary(c);
	}
	//UpperCase to LowerCase
	char A = 'Z';
	char a = (A|(1<<5));
	cout << a << endl;
	// (1<<5) == ' '
	cout << (char)('A' | ' ') << endl;

	//LowerCase to UpperCase
	char a1 = 'a';
	char A1 = (a1 & ~(1<<5));
	cout << A1 << endl;

	cout << (char)('a' & '_') << endl;
}
