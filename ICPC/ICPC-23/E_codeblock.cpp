#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(vector<int> &vec) {
    int n = vec.size();
    int cunt = 0;
    int i = 0;

    while (i < n) {
        int j = i + 1;
        while (j < n && vec[i] == vec[j]) j++;
        cunt += ((j - i) * (j - i + 1)) / 2;
        i = j;
    }

    return (n * (n + 1) / 2) - cunt;
}

int32_t main() {
    int t; cin >> t;

    for (int tt = 1; tt <= t; tt++) {
        int n; cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) cin >> vec[i];

        int result = Solve(vec);
        cout << "Case " << tt << ": " << result << endl;
    }

    return 0;
}
