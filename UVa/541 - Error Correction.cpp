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
    ll n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        ll max[n][n];
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                cin >> max[i][j];
        ll sum = 0, r = 0, c = 0;
        ll row, col;
        for (ll i = 0; i < n; i++)
        {
            sum = 0;
            for (ll j = 0; j < n; j++)
                sum += max[i][j];
            if (sum % 2 != 0)
            {
                r++;
                row = i;
            }
        }
        for (ll j = 0; j < n; j++)
        {
            sum = 0;
            for (ll i = 0; i < n; i++)
                sum += max[i][j];
            if (sum % 2 != 0)
            {
                c++;
                col = j;
            }
        }
        if (r == 0 && c == 0)
            cout << "OK" << endl;
        if (r == 1 && c == 1)
            cout << "Change bit (" << row + 1 << "," << col + 1 << ")" << nl;
        if (r > 1 || c > 1)
            cout << "Corrupt" << nl;
    }
}