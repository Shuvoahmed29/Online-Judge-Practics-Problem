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
#define vi vector<ll>

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        int a[n];
        For(i, n)
        {
            int p;
            cin >> p;
            s.insert(p);
        }
        int d = s.size();
        for (int k = 1; k <= n; k++)
        {
            if (k < d)
                a[k - 1] = d;
            else
                a[k - 1] = k;
        }
        For(i, n) cout << a[i] << " ";
        cout << nl;
    }
}
