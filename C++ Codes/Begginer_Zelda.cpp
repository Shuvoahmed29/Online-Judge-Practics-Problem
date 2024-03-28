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
    int tt; cin >> tt;

    while (tt--) {
        int n;  cin >> n;

        vector<int> degree(n + 1, 0);

        for (int i = 0; i < n - 1; i++) {
            int u, v; cin >> u >> v;
            degree[u]++;
            degree[v]++;
        }

        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (degree[i] == 1) count++;
        }

        cout << (count + 1) / 2 << endl;
    }
}