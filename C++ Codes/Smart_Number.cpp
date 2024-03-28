#include<bits/stdc++.h>
using namespace std;
// #define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e7+10;
vector<bool>isPrime(N,true);
bool is_circular_prime(int n){
    string str = to_string(n);
    for (int i = 0; i < str.size(); ++i) {
        rotate(str.begin(), str.begin() + 1, str.end());
        if (!isPrime[stoi(str)]) {
            return false;
        }
    }
    return true;
}
bool Prime(int n){
	int sum = 0;
	while(n>0){
		int r = n % 10;
    	sum = sum + r;
    	n /= 10;
	}
	if(isPrime[sum]) return true;
	else return false;
}
int CircularPrime(int n){
	int cunt = 0;
    for (int i = 2; i <= n; ++i) {
        if (is_circular_prime(i)) {
        	if(Prime(i)) cunt++;
        }
    }
    return cunt;
}
int32_t main(){
	code();
	int n;	cin >> n;
	isPrime[0] = isPrime[1] = false;
	//Sieve Algorithm
	for(int i=2;i<=N;i++){
		if(isPrime[i]){
			for(int j=2*i;j<=N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	int ans = CircularPrime(n);
	cout << ans << endl;
}