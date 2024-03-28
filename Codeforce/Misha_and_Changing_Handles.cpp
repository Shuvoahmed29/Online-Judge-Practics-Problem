#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	string str1,str2;
	map<string,string>mp;
	while(tt--){
		cin >> str1 >> str2;
		bool ok=false;
		for(auto it:mp){
			if(it.second == str1){
				mp[it.first] = str2;
				ok=true;
			}
		}
		if(ok==false) mp[str1] = str2;
	}
	cout << mp.size() << endl;
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
}