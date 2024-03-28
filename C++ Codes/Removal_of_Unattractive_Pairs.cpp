#include<bits/stdc++.h>
using namespace std;
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
		int n;	cin >> n;
		string str;	cin >> str;
		string temp = str;
		sort(temp.begin(),temp.end());
		if(temp[0] == temp[n-1]){
			cout << n << endl;
			continue;
		}
		map<char,int>mp;
		for(int i=0;i<n;i++) mp[str[i]]++;
		int k = 0;
		for(auto it:mp) k = max(k,it.second);
		int len = max(0 , k - (n-k));
		if(n%2 == 1 && len == 0) len = 1;
		cout << len << endl;
	}
}
