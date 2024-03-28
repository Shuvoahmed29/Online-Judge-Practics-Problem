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
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, indx = 0, value = 0;
        cin >> n;
        vector<ll> vec, v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vec.pb(x);
        }
        for (int i = 1; i <= n; i++)
        {
            if (vec[i - 1] == i)
                v.pb(i);
            else
            {
                indx = i - 1;
                value = i;
                break;
            }
        }
        for (int i = indx + 1; i < n; i++)
        {
            if (value == vec[i])
            {
                for (int j = i; j >= indx; j--)
                    v.pb(vec[j]);
                for (int k = i + 1; k < n; k++)
                    v.pb(vec[k]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
}