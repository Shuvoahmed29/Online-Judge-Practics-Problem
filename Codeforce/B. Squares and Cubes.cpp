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

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb push_back
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> s;
        ll p, f = 2, u = 2, b;
        s.insert(1);
        ll sum = 0;
        for (int i = 1; i < 32591; i++)
        {
            p = f * f;
            s.insert(p);
            f++;
            b = u * u * u;
            s.insert(b);
            u++;
        }
        for (auto it : s)
        {
            if (it <= n)
                sum++;
            else
                break;
        }
        cout << sum << nl;
    }
}