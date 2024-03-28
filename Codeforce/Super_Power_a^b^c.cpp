#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int M = 1e9+7;
int binaryExp(int a,int b, int m){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans*a)%m;
		}
		a = (a*a)%m;
		b = b>>1;
	}
	return ans;
}
int main(){
	code();
	// 50^64^32 % M
	int a=2, b=5,c=2;
	cout << binaryExp(a,binaryExp(b,c,M-1),M) << endl;
}
