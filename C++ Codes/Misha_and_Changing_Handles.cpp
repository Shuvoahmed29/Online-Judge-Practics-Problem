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
	map<string,string>mp;
	while(tt--){
		string str1,str2;	cin >> str1 >> str2;
		bool ok = false;
		for(auto it:mp){
			if(it.second == str1){
				mp[it.first] = str2;
				ok = true;
			}
		}
		if(!ok) mp[str1] = str2;
	}
	cout << mp.size() << endl;
	for(auto it:mp){
		cout << it.first << " "<<it.second << endl;
	}
}
