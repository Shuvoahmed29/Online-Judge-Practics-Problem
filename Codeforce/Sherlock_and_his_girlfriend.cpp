#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e7+7;
vector<bool>isPrime(N,true);
int main(){
	code();
	int n;	cin >> n;
	for(int i=2;i<=N;i++){
		if(isPrime[i]){
			for(int j=2*i;j<=N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	if(n==1){
		cout << 1 << endl;
		cout << 1 << endl;
	}
	else if(n == 2){
        cout << 1 << endl;
        cout << 1 <<" " << 1<< endl;
    }
	else{
		cout << 2 << endl;
		for(int i=2;i<=n+1;i++){
			if(isPrime[i]){
				cout << 1 << " ";
			}
			else cout << 2 << " ";
		}
		cout << endl;
	}
}
