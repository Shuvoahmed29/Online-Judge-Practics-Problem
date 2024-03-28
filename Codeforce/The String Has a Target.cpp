#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll p = 0;
        char ch = str[0];
        for (ll i = 1; i < n; i++)
        {
            if (ch >= str[i])
            {
                // cout << str[i];
                ch = str[i];
                p = i;
                // break;
            }
        }
        cout << str[p];
        for (ll i = 0; i < n; i++)
        {
            if (i != p)
                cout << str[i];
        }
        cout << endl;
    }
}