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
	string str;
	while(tt--){
		string s;	cin >> s;
		str+=s;
	}
	int cunt=1;
	for(int i=0;i<str.size()-1;i++){
		if(str[i]==str[i+1]) cunt++;
	}
	cout << cunt << endl;
}
