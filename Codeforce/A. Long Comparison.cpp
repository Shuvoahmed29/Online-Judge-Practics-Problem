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
        string x1, x2;
        ll p1, p2;
        cin >> x1 >> p1;
        while (x1[x1.size() - 1] == '0')
        {
            p1++;
            x1.pop_back();
        }
        cin >> x2 >> p2;
        while (x2[x2.size() - 1] == '0')
        {
            p2++;
            x2.pop_back();
        }
        if (x1 == x2)
        {
            if (p1 == p2)
                cout << "=" << nl;
            else if (p1 > p2)
                cout << ">" << nl;
            else
                cout << "<" << nl;
        }
        else
        {
            ll len1 = x1.size();
            ll n1 = len1 + p1;
            ll len2 = x2.size();
            ll n2 = len2 + p2;
            if (n1 > n2)
                cout << ">" << nl;
            else if (n1 < n2)
                cout << "<" << nl;
            else
            {
                if (x1 > x2)
                    cout << ">" << nl;
                else
                    cout << "<" << nl;
            }
        }
    }
    return 0;
}
