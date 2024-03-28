#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		string str;	cin >> str;
		string s = str;
		sort(s.begin(),s.end());
		if(s == str) {
			cout << 0 << endl;
			continue;
		}
		char ch = str[n-1];
		vector<int>vec;
		string lexi;
		for(int i=n-1;i>=0;i--){
			if(str[i]>=ch){
				vec.push_back(i);
				lexi += str[i];
				ch = str[i];
			}
		}
		int cunt = 0;
		for(int i=lexi.size()-1;i>=0;i--){
			if(lexi[i]==lexi.back()) cunt++;
			else break;
		}
		reverse(lexi.begin(),lexi.end());
		for(int i=0;i<lexi.size();i++){
			str[vec[i]] = lexi[i];
		}
		int ans = lexi.size();
		if(is_sorted(str.begin(),str.end()))
			cout << ans-cunt << endl;
		else cout << -1 << endl;
	}
}
