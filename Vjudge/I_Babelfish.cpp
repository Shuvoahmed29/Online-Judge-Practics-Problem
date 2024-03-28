#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	string line;
	map<string,string>mp;
	while(getline(cin,line)){
		if(line.size()==0) continue;
		if(find(line.begin(),line.end(),' ')!=line.end()){
			stringstream ss(line);
			string str1,str2;
			ss>>str1;
			ss>>str2;
			mp[str2] = str1; 
		}
		else{
			if(mp.find(line)!=mp.end()) cout << mp[line] << endl;
			else cout << "eh" << endl;
		}
	}
}
