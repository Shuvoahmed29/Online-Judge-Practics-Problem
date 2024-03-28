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
    string str;
    char aa[47] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                   'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                   'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47,
                   '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61};
    while (getline(cin, str))
    {
        ll len = str.size();
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 65 && str[i] <= 90)
                str[i] = tolower(str[i]);
        }
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ' || str[i] == '\n')
                cout << str[i];
            else
            {
                for (int j = 1; j < 47; j++)
                {
                    if (str[i] == aa[j])
                    {
                        cout << aa[j - 2];
                        break;
                    }
                }
            }
        }
        cout << nl;
    }
}