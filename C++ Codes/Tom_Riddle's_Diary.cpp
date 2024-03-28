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
	int tt; cin >> tt;
	vector<string>vec;
	while(tt--){
		string str;	cin >> str;
		bool ok = false;
		for(auto it:vec){
			if(it==str) ok=true;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
		vec.push_back(str);
	}
}
