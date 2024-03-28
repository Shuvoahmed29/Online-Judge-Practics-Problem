#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		string str;	cin >> str;
		int plus=0,minus=0;
		for(int i=0;i<n;i++){
			if(str[i]=='+') plus++;
			else minus++;
		}
		cout << abs(plus-minus) << endl;
	}
}
