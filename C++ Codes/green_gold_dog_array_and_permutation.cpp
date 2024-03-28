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
		int n,x;	cin >> n;
		vector<int>vec(n),v(n);
		for(int i=0;i<n;i++) cin >> vec[i];
		v = vec;
		sort(v.begin(),v.end());
		map<int,stack<int>>mp;
		int w=n;
		for(auto it:v){
			mp[it].push(w);
			w--;
		}
		for(auto it:vec){
			cout << mp[it].top() << " ";
			mp[it].pop();
		}
		cout << endl;
	}
}
