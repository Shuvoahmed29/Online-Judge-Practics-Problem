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
	while(tt--){
		int n;	cin >> n;
		string str;	cin >> str;
		map<char,int>mp;
		for(int i=0;i<n;i++){
			mp[str[i]]++;
		}
		int cunt = 0;
		for(auto it:mp){
			if(it.second>=(it.first-'A'+1))	cunt++;
		}
		cout << cunt << endl;
	}
}
