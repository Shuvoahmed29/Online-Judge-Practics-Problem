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
    string str[105];
    ll p = 0, k = 0;
    while (getline(cin, str[p]))
    {
        if (str[p].size() > k)
            k = str[p].size();
        p++;
    }
    for (int j = 0; j < k; j++)
    {
        for (int i = p - 1; i >= 0; i--)
        {
            if (str[i].size() > j)
                cout << str[i][j];
            else
                cout << ' ';
        }
        cout << nl;
    }
}