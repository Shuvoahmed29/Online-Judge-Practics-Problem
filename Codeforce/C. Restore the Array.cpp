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
        n--;
        vector<ll> vec(n), ans(n + 1);
        for (ll i = 0; i < n; i++)
            cin >> vec[i];
        ans[0] = vec[0];
        ans[n] = vec[n - 1];
        for (ll i = 0; i < n - 1; i++)
        {
            ans[i + 1] = min(vec[i], vec[i + 1]);
        }
        for (ll i = 0; i < n + 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}