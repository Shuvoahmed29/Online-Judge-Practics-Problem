#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void primeFactor(int n){
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			n = n/i;
			cout << i << " ";
		}	
	}
	if(n>1) cout << n << endl;
}
int main(){
	code();
	int n;	cin >> n;
	primeFactor(n);
}
