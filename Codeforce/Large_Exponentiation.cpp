#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int M = 1e9+7;

//when a = 10^18,b=10^9 and M = 10^9;
//Large Exponentiation using Binary Multiplication
int binaryMutliple(int a,int b){
	int ans = 0;
	while(b){
		if(b&1){
			ans = (ans+a)%M;
		}
		a = (a+a)%M;
		b = b>>1;
	}
	return ans;
}
int binaryExp(int a,int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = binaryMutliple(ans,a);
		}
		a = binaryMutliple(a,a);
		b = b>>1;
	}
	return ans;
}

int main(){
	code();
	int a=2,b=12;
	cout << binaryExp(a,b) << endl;
}
