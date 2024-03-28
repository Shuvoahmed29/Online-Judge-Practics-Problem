#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define For(i, n) for (int i = 0; i < n; i++)
typedef std::vector<ll> V;
#define o cout
#define i cin

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)

#define ll long long
#define vi vector<int>
#define vll vector<ll>

template <typename T>
istream &operator>>(istream &x, vector<T> &v)
{
    for (T &it : v)
        x >> it;
    return x;
}
/*-----------------SHUVO AHMED------------------------------*/
int main()
{
    ll tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n, x;
        cin >> n >> x;

        vll arr(n);
        cin >> arr;
        vll dp(n + 1, -1LL * 1e12);

        for (int i = 0; i < n; i++)
        {
            ll val = 0;
            for (int j = i; j < n; j++)
            {
                val += arr[j];
                dp[j - i + 1] = max(dp[j - i + 1], val);
            }
        }

        for (ll i = 0; i <= n; i++)
        {
            ll ans = 0;
            for (ll j = 1; j <= n; j++)
            {
                ans = max(ans, dp[j] + (min(i, j) * x));
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}