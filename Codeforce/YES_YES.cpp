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
		transform(str.begin(),str.end(),str.begin(),::toupper);
		if(str=="YES") cout << "YES\n";
		else cout << "NO\n";
	}
}
