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
		int n,k,m;	cin >> n >> k >> m;
		string str;	cin >> str;
		set<char>st;
		string ans;
		for(int i=0;i<m;i++){
			st.insert(str[i]);
			if(st.size()==k){
				ans += str[i];
				st.clear();
			}
		}
		if(ans.size()>=n) cout << "YES\n";
		else{
			cout << "NO" << endl;
            char missing;
            for (int j = 0; j < k; j++) {
                char ch = (char)('a' + j);
                if (st.count(ch) == 0) {
                    missing = ch;
                    break;
                }
            }
            while (ans.size() < n) ans+=missing;
            cout << ans << endl;
		}
	}
}