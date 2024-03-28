#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        while (m--)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            if (c <= 0)
            {
                cout << "NO" << '\n';
                continue;
            }
            ll idx = lower_bound(vec.begin(), vec.end(), b) - vec.begin();
            // cout << "idx: "<<idx<< endl;
            if (n != idx)
            {
                ll w = abs(b - vec[idx]);
                w = w * w;
                if (4 * a * c > w)
                {
                    cout << "YES" << '\n';
                    cout << vec[idx] << '\n';
                    continue;
                }
            }

            if (0 != idx)
            {
                idx = idx - 1;
                ll w = abs(b - vec[idx]);
                w = w * w;
                if (4 * a * c > w)
                {
                    cout << "YES" << '\n';
                    cout << vec[idx] << '\n';
                    continue;
                }
            }
            cout << "NO" << '\n';
        }
    }
}