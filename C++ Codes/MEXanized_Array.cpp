#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,k,x;	cin >> n >> k >> x;
		if(n<k) cout << -1 << endl;
		else{
			int p=k-1;
			if(p<=x){
				n = n-k;
				int sum=-1;
				sum = p*(p+1)/2;
				if(k!=x)sum += n*x;
				else sum +=n*(x-1);
				cout << sum << endl;
			}
			else cout << -1 << endl;
		}
	}
}