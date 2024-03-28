#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int M = 1e9+7;
int binaryExp(int a,int b){
	int ans = 1;
	while(b>1){
		if(b&1){
			ans = (ans*1LL*a)%M;
		}
		a = (a*1LL*a);
		b = b>>1;
	}
	return ans;
}
int main(){
	code();
	int a=10,b=12;
	cout << binaryExp(a,b) << endl;
}
