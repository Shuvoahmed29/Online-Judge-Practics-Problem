#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		string str;	cin >> str;
		int a=0,b=0;
		for(int i=0;i<5;i++){
			if(str[i]=='A') a++;
			else b++;
		}
		if(a>b)	cout << 'A' << endl;
		else cout << 'B' << endl;
	}
}