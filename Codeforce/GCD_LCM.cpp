#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
//LCM = (a*b)/GCD
int main(){
	code();
	//GCD(Greatest Common Divisor)
	cout << gcd(18,12) << endl;
	cout << gcd(12,18) << endl;
	//GCD Using builtin function
	cout << __gcd(12,18) << endl;

	//LCM(Lowest Common Multiple)
	int lcm = (12*18)/gcd(12,18);
	cout << lcm << endl;

	//Minimum Fraction
	cout << 12/gcd(12,18) << "/" << (18/gcd(12,18)) << endl;
}
