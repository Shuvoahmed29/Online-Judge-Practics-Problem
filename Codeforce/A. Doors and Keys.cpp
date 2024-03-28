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
#define o cout
#define i cin

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
    i >> t;
    while (t--)
    {
        string str;
        i >> str;
        ll len = str.size();
        if (str[0] == 'R' || str[0] == 'G' || str[0] == 'B')
            o << "NO\n";
        else if (str[len - 1] == 'r' || str[len - 1] == 'g' || str[len - 1] == 'b')
            o << "NO\n";
        else
        {
            ll R, G, B, r, g, b, k = 0;
            For(i, len)
            {
                if (str[i] == 'R')
                    R = i;
                else if (str[i] == 'r')
                    r = i;
                else if (str[i] == 'G')
                    G = i;
                else if (str[i] == 'g')
                    g = i;
                else if (str[i] == 'B')
                    B = i;
                else if (str[i] == 'b')
                    b = i;
            }
            if (b < B)
                k++;
            if (r < R)
                k++;
            if (g < G)
                k++;
            if (k == 3)
                o << "YES\n";
            else
                o << "NO\n";
        }
    }
}