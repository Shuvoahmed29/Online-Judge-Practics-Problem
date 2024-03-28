#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		string str;	cin >> str;
		char ch=str[0];
		for(int i=1;i<str.size();i++){
			if(str[i]!=ch){
				continue;
			}
			else{
				cout << ch;
				ch=str[i+1];
				i++;
			}
		}
		cout << endl;
	}
}