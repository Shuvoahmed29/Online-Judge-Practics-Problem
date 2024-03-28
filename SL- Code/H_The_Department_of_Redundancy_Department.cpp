#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	map<string,int>mp;
	vector<string>vec;
	while(cin >> str && str!="\n"){
		if(mp[str] == 0) vec.push_back(str);
		mp[str]++;
	}
	for(int i=0;i<vec.size();i++){
		cout << vec[i] << " " << mp[vec[i]] << endl;
	}
}