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
	string str;	cin >> str;
	string s="abcdefghijklmnopqrstuvwxyz";
	int cost=0;
	if(str[0]!='a')str.insert(str.begin(),'a');
	for(int i=0;i<str.size()-1;i++){
		int x,y;
		for(int j=0;j<26;j++){
			if(str[i]==s[j]) x=j;
			if(str[i+1]==s[j]) y=j;
		}
		int dif = abs(x-y);
		int ans = min(dif,26-dif);
		cost += ans;
	}
	cout << cost << endl;
}
