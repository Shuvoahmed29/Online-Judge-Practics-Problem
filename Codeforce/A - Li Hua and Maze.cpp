#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll row, col;
        cin >> row >> col;
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll cost = 0;
        if ((a == 1 && b == 1) || (c == 1 && d == 1) || (a == row && b == col) || (c == row && d == col) || (a == 1 && b == col) || (c == 1 && d == col) || (a == row && b == 1) || (c == row && d == 1) || (c == row && d == 1))
        {
            cost = 2;
        }
        else if (a == 1 || a == row || c == 1 || c == row || b == col || b == 1 || d == 1 || d == col)
        {
            cost = 3;
        }
        else
            cost = 4;
        cout << min(min(row, col), cost) << endl;
    }
}