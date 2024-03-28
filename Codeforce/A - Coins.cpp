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
        if (n % 2 != 0 && k % 2 == 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}