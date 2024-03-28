#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
int T, n, q, s[N], b[N], pos[N];

int get(int x) {
    if (b[x] == x) return x;
    return b[x] = get(b[x]);
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
            b[i] = i;
            pos[i] = i;
        }
        cin >> q;
        while (q--) {
            int op, x, y;
            cin >> op >> x;
            if (op == 1) {
                cin >> y;
                int x1 = get(pos[x]), y1 = get(pos[y]);
                if (s[x1] > s[y1]) {
                    b[y1] = x1;
                    s[x1] += s[y1];
                } else if (s[x1] < s[y1]) {
                    b[x1] = y1;
                    s[y1] += s[x1];
                }
            } else if (op == 2) {
                int t = get(pos[x]);
                cout << s[t] - n << endl;
            } else {
                int t = get(x);
                cout << pos[t] << endl;
            }
        }
    }
    return 0;
}
