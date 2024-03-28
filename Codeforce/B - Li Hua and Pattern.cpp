#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n][n];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        ll cunt = 0;
        for (ll i = 0; i < n / 2; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (arr[i][j] != arr[n - 1 - i][n - 1 - j])
                    cunt++;
            }
        }
        if ((n & 1) != 0)
        {
            for (ll i = 0; i < n / 2; i++)
            {
                if (arr[n / 2][i] != arr[n / 2][n - 1 - i])
                    cunt++;
            }
        }
        if (cunt > k)
            cout << "NO" << endl;
        else
        {
            k = k - cunt;
            if (k % 2 == 0 || (n & 1) != 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}