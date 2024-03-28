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
        ll n, sum = 0;
        cin >> n;
        string str[n], str1;
        char s[n];
        for (int i = 0; i < n - 2; i++)
        {
            cin >> str[i];
            str1 += str[i];
        }
        for (int i = 1; i < str1.size(); i = i + 2)
        {
            if (str1[i] == str1[i + 1])
            {
                str1[i + 1] = 'c';
            }
        }
        ll p = 0;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] != 'c')
            {
                s[p] = str1[i];
                p++;
            }
        }
        if (p != n)
            s[n - 1] = 'a';
        for (int i = 0; i < n; i++)
            cout << s[i];
        cout << nl;
    }
}