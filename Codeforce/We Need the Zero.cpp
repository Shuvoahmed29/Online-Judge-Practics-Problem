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
        vector<ll> vec(n), XOR(n);
        ll p = -1;
        for (ll i = 0; i < n; i++)
            cin >> vec[i];
        for (ll x = 0; x <= 256; x++)
        {
            for (ll i = 0; i < n; i++)
            {
                XOR[i] = vec[i] ^ x;
            }
            ll ans = 0;
            for (auto it : XOR)
            {
                // cout << it << " ";
                ans = ans ^ it;
            }
            // cout << endl;
            // cout <<"Ans:"<<ans << " X:"<<x << endl;
            if (ans == 0)
            {
                p = x;
                break;
            }
        }
        cout << p << endl;
    }
}