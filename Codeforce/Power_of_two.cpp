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
	int n=16;
	if((n&(n-1))==0){
		cout << "Power of 2\n";
	}
	else cout << "NOT power of 2\n";
}
