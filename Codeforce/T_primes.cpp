#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int N=1e7+7;
vector<bool>isPrime(N,true);
int32_t main(){
	code();
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<=N;i++){
		if(isPrime[i]){
			for(int j=2*i;j<=N;j+=i){
				isPrime[j]=false;
			}
		}
	}
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		int p = sqrt(n);
		if(p*p!=n){
			cout << "NO\n";
			continue;
		}
		if(isPrime[sqrt(n)]) cout << "YES\n";
		else cout << "NO\n";
	}
}
