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
    char a[101][101];
    char b[16][10] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    ll n, j = 0, f, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n < 16)
        f = 16;
    else if (n < 32)
        f = 32;
    else if (n < 48)
        f = 48;
    else if (n < 64)
        f = 64;
    else if (n < 80)
        f = 80;
    else if (n < 96)
        f = 96;
    else
        f = 100;
    for (int i = 0; i < f; i++)
    {
        cout << a[j++] << ": " << b[k++] << nl;
        if (j == n)
            j = 0;
        if (k == 16)
            k = 0;
    }
    return 0;
}