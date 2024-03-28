#include <bits/stdc++.h>
using namespace std;
/*-----------------------SHUVO AHMED---------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (ll i = x; i <= y; i++)

#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define vp vector<pair<ll, ll>>
#define Pin(x, y) pb(mp(x, y))
#define sl set<ll>
#define Rs set<ll, greater<ll>> // Reverse Set
#define In(x) insert(x)         // or use emplace(x)
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define ff first
#define ss second
#define rr return 0

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc       \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
inline void solve();
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shuvo cout.tie(NULL);
#define mtc               \
    int main()            \
    {                     \
        Code By Shuvo tc; \
        rr;               \
    }
#define shuvo                  \
    int main()                 \
    {                          \
        Code By Shuvo solve(); \
        rr;                    \
    }

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi acos(-1)
/********If Something goes over your head,run after it.********/ shuvo
    /*-----------------------SHUVO AHMED---------------------------*/ // mtc
    inline void
    solve()
{
    vl vec, v1;
    ll x = 0;
    For(i, 6)
    {
        cin >> x;
        vec.pb(x);
        if (i == 0)
            x = x * 1;
        else if (i == 1)
            x = x * 5;
        else if (i == 2)
            x = x * 10;
        else if (i == 3)
            x = x * 20;
        else if (i == 4)
            x = x * 50;
        else if (i == 5)
            x = x * 100;
        v1.pb(x);
    }
    vl v2 = v1;
    Sort(v2), Reverse(v2);
    ll ans = 0;
    ll mx = v2[0], mini = 1e18;
    if (v2[0] != v2[1])
    {
        For(i, 6)
        {
            if (v2[0] == v1[i])
            {
                if (i == 0)
                    ans = 1;
                else if (i == 1)
                    ans = 5;
                else if (i == 2)
                    ans = 10;
                else if (i == 3)
                    ans = 20;
                else if (i == 4)
                    ans = 50;
                else if (i == 5)
                    ans = 100;
                break;
            }
        }
    }
    else
    {
        for (ll i = 0; i < 6; i++)
        {
            if (v1[i] == mx)
            {
                if (mini > vec[i])
                {
                    mini = min(mini, vec[i]);
                    if (i == 0)
                        ans = 1;
                    else if (i == 1)
                        ans = 5;
                    else if (i == 2)
                        ans = 10;
                    else if (i == 3)
                        ans = 20;
                    else if (i == 4)
                        ans = 50;
                    else if (i == 5)
                        ans = 100;
                }
            }
        }
    }
    cout << ans << nl;
}