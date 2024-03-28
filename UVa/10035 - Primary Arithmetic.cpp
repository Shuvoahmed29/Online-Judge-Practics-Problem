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
    ll a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            return 0;
        ll sum = 0, cunt = 0;
        while (a != 0 || b != 0)
        {
            sum = (a % 10 + b % 10 + sum) / 10;
            a = a / 10;
            b = b / 10;
            if (sum != 0)
                cunt++;
        }
        if (cunt == 0)
            cout << "No carry operation.\n";
        else if (cunt == 1)
            cout << cunt << " carry operation.\n";
        else
            cout << cunt << " carry operations.\n";
    }
}