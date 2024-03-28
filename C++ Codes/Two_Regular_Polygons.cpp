#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int N=1e4+9;
vector<bool>isPrime(N,true);
void Sieve(){
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<=N;i++){
		for(int j=2*i;j<=N;j+=i){
			isPrime[j]=false;
		}
	}
}
int32_t main(){
	code();
	Sieve();
	int tt;	cin >> tt;
	while(tt--){
		int a,b;	cin >> a >> b;
		if(a%b==0) cout << "YES\n";
		else cout << "NO\n";
	}
}
