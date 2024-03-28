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
	string str = "abcdefghijklmnopqrstuvwxyz";
	while(tt--){
		int n;	cin >> n;
		map<char,int>mp;
		for(int i=0;i<str.size();i++) mp[str[i]] = 0;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin >> vec[i];
			for(auto it:mp){
				if(it.second == vec[i]){
					cout << it.first;
					mp[it.first]++;
					break;
				}
			}
		}
		cout << endl;
	}
}