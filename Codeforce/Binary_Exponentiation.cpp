#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int M = 1e9+7;

//Recursive Method
int binaryExp(int a,int b){
	if(b==0)	return 1;
	int res = binaryExp(a,b/2);
	if(b&1){
		return (a*((res*1LL*res)%M)%M);
	}
	else{
		return (res*1LL*res)%M;
	}
}

//Iterative Method(Best)
int BinaryExp(int a,int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans*1LL*a)%M;
		}
		a = (a*1LL*a)%M;
		b = b>>1;
	}
	return ans;
}
int main(){
	code();
	int a=2123123,b=12000;

	//Recursive Method
	cout << binaryExp(a,b) << endl;

	//Iterative Method(Best)
	cout << BinaryExp(a,b) << endl;
}
