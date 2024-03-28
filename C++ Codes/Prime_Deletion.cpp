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
		string str;	cin >> str;
		int one=0,three=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='1') one=i;
			if(str[i]=='3') three=i;
		}
		if(one<three) cout << 13 << endl;
		else cout << 31 << endl;
	}
}
