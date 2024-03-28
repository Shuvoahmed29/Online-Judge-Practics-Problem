#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tests = 1;
    cin >> tests;
    while (tint n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int start = 0, end = 0;
        int ncas;
        for (int i = 0; i < (int)v.size() - 1; i++)
            if (v[i] == v[i + 1]) {
                start = i;
                break;
            }
        for (int i = (int)v.size() - 1; i > 0; i--)
            if (v[i] == v[i - 1]) {
                end = i;
                break;
            }
        ncas = end - start + 1;
        if (ncas < 3)
            cout << 0 << endl;
        else if (ncas == 4 || ncas == 3)
            cout << 1 << endl;
        else
            cout << ncas - 3 << endl;ests--) {

    }
}
