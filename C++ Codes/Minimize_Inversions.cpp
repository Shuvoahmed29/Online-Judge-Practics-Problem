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
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			int b;	cin >> b;
			mp[vec[i]] = b;
		}
		sort(vec.begin(),vec.end());
		for(int i=0;i<n;i++) cout << vec[i] << ' ';
		cout << endl;
		for(int i=0;i<n;i++) cout << mp[vec[i]] << ' ';
		cout << endl;
	}
}