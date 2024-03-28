#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            x = x ^ vec[i];
        }
        if (x == 0)
            cout << "YES" << '\n';
        else
        {
            int cunt = 0, k = 0;
            for (int i = 0; i < n; i++)
            {
                k = k ^ vec[i];
                if (k == x)
                {
                    cunt++;
                    k = 0;
                }
            }
            if (cunt >= 3)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}