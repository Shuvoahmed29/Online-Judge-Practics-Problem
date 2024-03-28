#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int M = 1337;
int binaryExp(int a,int b){
	int ans = 1;
	a = a%M;
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
	int a;	cin >> a;
	int n;	cin >> n;
	vector<int>vec(n);
	int b=0,p=n-1;
	for(int i=0;i<n;i++){
		cin >> vec[i];
		b = (b+vec[i]*binaryExp(10,p))%1140;
		// cout << b << endl;
		p--;
	}
	// cout << b << endl;
	int ans = binaryExp(a,b)%1337;
	cout << ans << endl;
}
