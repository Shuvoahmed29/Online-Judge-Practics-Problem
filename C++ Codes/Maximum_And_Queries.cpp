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
    int n, q; cin >> n >> q;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)  cin >> p[i];

    vector<int> a(n + 1, 0);

    for (int i = 1; i <= n; ++i)  a[i] = p[i - 1];

    vector<int> res(q);
    for (int query = 0; query < q; ++query) {
        int k; cin >> k;
        int ans = 0;
        vector<int> c(n+1);
        for(int i=0;i<n+1;i++) c[i] = a[i];

        for (int j = 60; j >= 0; j--) {
            int u = 0;
            vector<int> b(n+1);
            for(int i=0;i<n+1;i++) b[i] = c[i];

            for (int i = 1; i <= n; i++) {
                if (!((c[i] >> j) & 1)) {
                	int p_val = c[i];
                	c[i] += (1*1ll << j);
                	c[i] /= (1*1ll << j);
                	c[i] *= (1*1ll << j);
                	u += (c[i] - p_val);
                	if (u > k) break;
                }
                if (u <= k) {
                    k -= u;
                    ans += (1*1ll << j);
                } 
            	else for(int i=0;i<n+1;i++) c[i] = b[i];
            } 
        }
        res[query] = ans;
    }
    for(auto it:res) cout << it << endl;
}