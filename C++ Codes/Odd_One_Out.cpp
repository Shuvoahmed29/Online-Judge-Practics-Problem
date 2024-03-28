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
		int a,b,c;	cin >> a >> b >> c;
		if(a==b) cout << c << endl;
		else if(a==c) cout << b << endl;
		else if(b==c) cout << a << endl;
	}
}
