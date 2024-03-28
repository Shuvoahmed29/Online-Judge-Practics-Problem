#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        int p = abs(abs(a) - abs(b));
        if (p == 1 || p == 0)
            cout << abs(a) + abs(b) << endl;
        else
            cout << 2 * min(abs(a), abs(b)) + 2 * p - 1 << endl;
    }
}