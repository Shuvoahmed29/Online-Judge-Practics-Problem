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
#define vin(x, v) \
    For(i, x)     \
    {             \
        ll z;     \
        cin >> z; \
        v.pb(z);  \
    }
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
ll test = 1;
/********If Something goes over your head,run after it.********/ // shuvo
/*-----------------------SHUVO AHMED---------------------------*/ mtc inline void solve()
{
    string str;
    cin >> str;
    ll len = str.size();
    ll start = 0, end = len;
    vl vec(len + 1, 0), vec1(len + 1, 0);
    for (ll i = len - 1; i >= 0; i--)
    {
        vec[i] = vec[i + 1];
        if (str[i] == '1')
            vec[i]++;
    }
    For(i, len)
    {
        vec1[i + 1] = vec1[i];
        if (str[i] == '0')
            vec1[i + 1]++;
    }
    ll ans = INT_MAX;
    while (start <= end)
    {
        ll middle = start + end;
        middle /= 2;
        ll cunt = 0, cunt1 = 0;
        For(i, len)
        {
            ll fist = i, last = len - 1, idx = -2;
            while (fist <= last)
            {
                ll mid = fist + last;
                mid /= 2;
                if (vec1[mid + 1] - vec1[i] <= middle)
                    fist = mid + 1, idx = mid;
                else
                    last = mid - 1;
            }
            if (idx != -2)
            {
                ll temp = cunt + vec[idx + 1];
                if (temp <= middle)
                    ++cunt1;
            }
            if (str[i] == '1')
                cunt += 1;
        }
        if (cunt <= middle)
            cunt1++;
        if (cunt1 != 0)
        {
            ans = middle;
            end = middle - 1;
        }
        else
            start = middle + 1;
    }
    cout << ans << nl;
}