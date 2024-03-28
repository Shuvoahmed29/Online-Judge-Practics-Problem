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
		int n,q;	cin >> n >> q;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		int query;
		vector<int>vec2;
		for(int i=0;i<q;i++){
			cin >> query;
			 if(vec2.empty() || vec2.back()>query)
				vec2.push_back(query);
		}
		for(auto it:vec2) cout << it << " ";
		cout << endl;
		for(int i=0;i<n;i++){
			for(auto it:vec2){
				if(vec[i]%(1<<it)==0){
					it = it-1;
					vec[i] += (1<<it);
				}
			}
		}
		for(auto it:vec){
			cout << it << " ";
		}
		cout << endl;
	}
}
