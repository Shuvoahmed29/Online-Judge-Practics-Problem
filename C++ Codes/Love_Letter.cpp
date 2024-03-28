#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		string str;	cin >> str;
		map<char,int>mp;
		for(int i=0;i<str.size();i++) mp[str[i]]++;
		int odd=0;
		for(auto it:mp){
			if(it.second%2!=0) odd++;
		}
		if(odd>1) {
			cout << -1 << endl;
			continue;
		}
		int cunt=0,n=str.size();
		for(int i=0;i<n/2;i++){
			char curr = str[i];
			char target = str[n-1-i];
			if(curr!=target){
				for(int j=n-1-i;j>i;j--){
					if(str[j]==curr){
						swap(str[j],target);
						cunt++;
						break;
					}
				}
			}
		}
		cout << cunt << endl;
	}
}