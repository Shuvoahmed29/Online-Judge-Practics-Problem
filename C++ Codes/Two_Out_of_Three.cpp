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
		vector<int> vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		map<int,int>mp;
		for(auto it:vec){
			mp[it]++;
		}
		vector<int>s;
		for(auto it : mp){
			if(it.second>=2)
				s.push_back(it.first);
		}
		if(s.size()<2)	cout << -1 << endl;
		else{
			vector<int>b;
			bool ok1 = false,ok2=false;
			for(auto it:vec){
				if(it == s[0]){
					b.push_back(ok1?2:1);
					ok1 = true;
				}
				else if(it == s[1]){
					b.push_back(ok2?3:1);
					ok2 = true;
				}
				else b.push_back(1);
			}
			for(auto it:b){
				cout << it << " ";
			}
			cout << endl;
		}
	}
}
