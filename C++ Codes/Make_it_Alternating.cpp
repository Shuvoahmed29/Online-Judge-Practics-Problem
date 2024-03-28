#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
#define MOD 998244353
int fact(int n){
	if(n==0 || n==1) return 1;
	return n*fact(n-1)%MOD;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		string str;	cin >> str;
		int cunt=1;
		int min_op=0,diff=1;
		for(int i=0;i<str.size();i++){
			if(str[i]==str[i+1]){
				cunt = (cunt+1)%MOD;
			}
			else{
				min_op = (min_op+cunt-1)%MOD;
				diff = (diff*cunt)%MOD;
				cunt=1;
			}
		}
		cout << min_op%MOD <<" ";
		cout << (diff*fact(min_op))%MOD << endl;
	}
}
