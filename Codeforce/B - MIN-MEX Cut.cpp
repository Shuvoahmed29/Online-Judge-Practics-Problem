#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t --> 0) {
        string str;
        cin >> str;
        int zero = count(str.begin(), str.end(), '0');
        if (zero == 0) {
            cout << 0 << '\n';
            continue;
        }
        int f = str.find('0');
        int l = str.rfind('0');
        if (l - f + 1 == zero)cout << 1 << '\n';
        else cout << 2 << '\n';
    }
    return 0;
}