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
    ll n, money, a;
    string name, frnd;
    vector<string> vec;
    ll cunt = 0;
    while (cin >> n)
    {
        vec.clear();
        map<string, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> name;
            mp[name] = 0;
            vec.pb(name);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> name >> money >> a;
            if (a > 0)
            {
                mp[name] = mp[name] + money % a;
                mp[name] = mp[name] - money;
                for (ll j = 0; j < a; j++)
                {
                    cin >> frnd;
                    mp[frnd] = mp[frnd] + money / a;
                }
            }
        }
        if (cunt > 0)
            cout << endl;
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " " << mp[vec[i]] << endl;
        cunt++;
    }
}