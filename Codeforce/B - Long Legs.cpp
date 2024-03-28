#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = 1e9;
        ll mx = max(x, y), mn = min(x, y);
        for (ll i = 1; i < 100002; i++)
        {
            ll p = (mx + i - 1) / i + (mn + i - 1) / i + i - 1;
            ans = min(ans, p);
        }
        cout << ans << endl;
    }
}