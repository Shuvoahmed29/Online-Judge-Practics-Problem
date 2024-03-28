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
#define pb push_back
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a, s;
        cin >> a >> s;
        if (a == s)
        {
            cout << 0 << endl;
            continue;
        }
        if (s.size() < a.size())
        {
            cout << -1 << endl;
            continue;
        }

        string ans;
        ll ls = s.size() - 1;
        ll la = a.size() - 1;

        for (int i = la; i >= 0; i--)
        {
            if (ls < 0)
            {
                ans = "-1";
                break;
            }
            ll av = a[i] - '0';
            ll sv = s[ls] - '0';
            string z;

            if (av == sv)
            {
                z = z + '0';
                ans = z + ans;
            }
            else if (av < sv)
            {
                ll dif = sv - av;
                z += (dif + '0');
                ans = z + ans;
            }
            else
            {
                ll n = s[ls] - '0';
                ls--;
                if (ls < 0)
                {
                    ans = "-1";
                    break;
                }
                else
                {
                    sv = (s[ls] - '0') * 10 + n;
                    ll m = sv - av;
                    if (m < 0 || m > 9)
                    {
                        ans = "-1";
                        break;
                    }
                    else
                    {
                        z += (m + '0');
                        ans = z + ans;
                    }
                }
            }
            ls--;
        }
        string z;
        for (int i = 0; i <= ls; i++)
            z += s[i];
        if (ans != "-1")
            ans = z + ans;
        while (ans[0] == '0')
        {
            ans.erase(ans.begin());
        }
        cout << ans << endl;
    }
}