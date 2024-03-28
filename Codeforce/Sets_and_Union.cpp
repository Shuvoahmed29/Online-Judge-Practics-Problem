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
		vector<set<int>>vec;
		for(int i=0;i<n;i++){
			int size;	cin >> size;
			set<int>s;
			for(int j=0;j<size;j++){
				int k;	cin >> k;
				s.insert(k);
			}
			vec.push_back(s);
		}
		int maxi=0;
		for(int i=0;i<n;i++){
			set<int>st;
			for(int j=0;j<n;j++){
				if(i!=j){
					st.insert(vec[j].begin(),vec[j].end());

				}
				maxi = max(maxi,(int)(st.size()));
			}
		}
		if(maxi==0) cout << 0 << endl;
		else cout << maxi-1 << endl;
	}
}
