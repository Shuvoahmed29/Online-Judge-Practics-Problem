#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
// #define int long long
const int N=1e7+1;
int isPrime[N];
void Sieve(){
	for(int i=1;i<=N;i++){
		isPrime[i]=1;
		for(int i=2;i*i<=N;i++){
			if(isPrime[i]==i){
				for(int j=i*i;j<=N;j+=i){
					isPrime[j]=i;
				}
			}
		}
	}
}
int32_t main(){
	//code();
	Sieve();
	int tt;	cin >> tt;
	while(tt--){
		int l,r;	cin >> l >> r;
		if(r<4){
			cout << -1 << endl;
			continue;
		}
		if(l==r){
			if(isPrime[l]==l){
				cout << -1 << endl;
				continue;
			}
			else{
				cout << isPrime[l] << " " << l-isPrime[l] << endl;
				continue;
			}
		}
		if(r%2==0){
			cout << 2 << " "<<r-2 << endl;
			continue;
		}
		else cout << 2 << " " <<r-3 << endl;
	}
}
