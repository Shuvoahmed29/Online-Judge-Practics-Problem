#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, d, p = 0;
        cin >> a >> b >> c >> d;
        if (a > c)
        {
            p = a - c;
            a = a - p;
        }
        else if (c > a)
        {
            p = c - a;
            a = a + p;
            b = b + p;
        }
        if (b > d)
            cout << -1 << endl;
        else
        {
            cout << p + 2 * (d - b) << endl;
        }
        // cout << a << " " << b << endl;
    }
}