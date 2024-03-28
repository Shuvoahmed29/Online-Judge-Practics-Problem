#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e7+10;
vector<bool>isPrime(N,true);
int main(){
	code();
	isPrime[0] = isPrime[1] = false;
	//Sieve Algorithm O(log log(N))
	for(int i=2;i<=N;i++){
		if(isPrime[i]){
			for(int j=2*i;j<=N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	int n;	cin >> n;
	cout << isPrime[n] << endl;
}
