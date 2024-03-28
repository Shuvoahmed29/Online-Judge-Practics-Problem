#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int32_t main(){
	int m,n;	cin >> m >> n;
	for(int i=1;i<=m;i++){
		string str;	cin >> str;
		int x;	cin >> x;
		mp[str] = x;
	}
	for(int i=1;i<=n;i++){
		string str;
		int p=0,sum=0;
		while(cin >> str){
			if(str == ".") break;
			sum+=mp[str];
		}
		cout << sum << endl;
	}
}