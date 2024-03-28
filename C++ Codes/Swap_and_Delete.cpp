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
		string str;	cin >> str;
		int one=0,zero=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='1') one++;
			else zero++;
		}
		for(int i=0;i<str.size();i++){
			if(str[i]=='1'){
				if(zero>0)	zero--;
				else break;
			}
			else{
				if(one>0)	one--;
				else break;
			}
		}
		cout << one + zero << endl;
	}
}
