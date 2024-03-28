#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main() {
	code();
    int tt;	cin >> tt;
    vector<int> cunt(30, 0);
    for (int i = 0; i < tt; ++i) {
        int t, v; cin >> t >> v;
        if (t == 1)  cunt[v]++;
        else {
            int i = 29;
            while (i >= 0) {
                if (cunt[i]) {
                	int k = v/pow(2,i);
                    int p = min(k, cunt[i]);
                    v -= p * pow(2,i);
                }
                i--;
            }
            if(v==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
