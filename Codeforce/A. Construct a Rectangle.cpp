#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define pb(x) push_back(x)

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
    ll t, a;
    cin >> t;
    while (t--)
    {
        vector<int> vec;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(), vec.end());
        if (vec[0] + vec[1] == vec[2])
            cout << "YES\n";
        else if (vec[0] == vec[1] && vec[2] % 2 == 0)
            cout << "YES\n";
        else if (vec[0] == vec[2] && vec[1] % 2 == 0)
            cout << "YES\n";
        else if (vec[1] == vec[2] && vec[0] % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}