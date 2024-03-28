#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll d;
        cin >> d;
        vector<vector<ll>> vec(d);
        for (ll i = 0; i < d; i++)
        {
            ll n;
            cin >> n;
            for (ll j = 0; j < n; j++)
            {
                ll x;
                cin >> x;
                vec[i].push_back(x);
            }
        }
        vector<ll> ans(d);
        set<ll> s;
        for (ll i = d - 1; i >= 0; i--)
        {
            ll p = 0;
            if (i == d - 1)
            {
                sort(vec[i].begin(), vec[i].end());
                for (ll j = 0; j < vec[i].size(); j++)
                    s.insert(vec[i][j]);
                ans.push_back(vec[i][0]);
            }
            else
            {
                set<ll>::iterator it;
                sort(vec[i].begin(), vec[i].end());
                for (ll j = 0; j < vec[i].size(); j++)
                {
                    it = s.find(vec[i][j]);
                    if (it != s.end())
                        s.insert(vec[i][j]);
                    else if (p == 0)
                    {
                        ans.push_back(vec[i][j]);
                        s.insert(vec[i][j]);
                        p++;
                    }
                    else
                        s.insert(vec[i][j]);
                }
            }
        }
        ll cunt = 0;
        for (ll i = ans.size() - 1; i >= 0; i--)
        {
            if (ans[i] != 0)
            {
                cunt++;
            }
        }
        if (cunt != d)
            cout << -1;
        else
        {
            for (ll i = ans.size() - 1; i >= 0; i--)
            {
                if (ans[i] != 0)
                {
                    cout << ans[i] << " ";
                }
            }
        }
        cout << endl;
    }
}