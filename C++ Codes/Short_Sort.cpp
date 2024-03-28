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
		if(str=="abc" || str[0]=='a' || str[1]=='b'||str[2]=='c') cout << "YES\n";
		else cout << "NO\n";
	}
}
