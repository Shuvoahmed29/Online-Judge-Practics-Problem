#include <bits/stdc++.h>
using namespace std;
void code() {
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
        int n; cin >> n;
        vector<pair<int, int>> vec;
        int p, q;
        for (int i = 0; i < n; i++) {
            cin >> p >> q;
            vec.push_back({p, q});
        }
        sort(vec.begin(), vec.end());

        set<int> st;
        int count = 0;
        for (int i = 0; i < n; i++) {
            count += st.size() - distance(st.begin(), st.lower_bound(vec[i].second));
            st.insert(vec[i].second);
        }
        cout << count << endl;
    }
}
