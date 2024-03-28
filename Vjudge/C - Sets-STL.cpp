#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    set<int> sets;
    while (tt--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            sets.insert(y);
        }
        else if (x == 2)
        {
            sets.erase(y);
        }
        else
        {
            auto it = sets.find(y);
            if (it != sets.end())
            {
                cout << "Yes" << '\n';
            }
            else
                cout << "No" << '\n';
        }
    }
}