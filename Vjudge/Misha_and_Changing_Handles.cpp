#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	string line;
	map<string,map<string,string>>mp;
	while(tt--){
		gets(line);
		stringstream ss(line);
		string a,b;
		ss>>a;
		ss>>b;
		cout << a << " " << b << endl;
		// mp[a][b] = a;
		// for(auto it:mp){
		// 	cout << it.first << endl;
		// }
	}
}