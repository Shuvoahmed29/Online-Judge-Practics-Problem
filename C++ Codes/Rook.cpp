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
	string s = "abcdefgh";
	while(tt--){
		string str;	cin >> str;
		char ch = str[0];
		int n = str[1]-'0';
		for(int i=0;i<8;i++){
			if(s[i]!=ch)cout << s[i] << n << endl;
		}
		for(int i=1;i<=8;i++){
			if(n != i)cout << ch << i << endl;
		}
	}
}
