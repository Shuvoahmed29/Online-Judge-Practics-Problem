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
		string str;	cin >> str;
		int idx;	cin >> idx;
		idx--;
		int n = str.size();
		int k = 0;


		while(idx >= n-k){
			idx = idx - (n - k);
			k++;
		}
		// cout << idx<<" "<<k<<endl;

		string t;
		for(int i=0;i<n;i++){
			while(!t.empty() && t.back()>str[i] && k!=0){
				t.pop_back();
				k--;
			}
			t += str[i];
		}
		// cout << t << endl;
		cout << t[idx];
	}
}
