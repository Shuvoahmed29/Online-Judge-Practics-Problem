#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        string str;
        cin >> str;
        ll cunt = 0, len = str.size(), p = 0;
        for (ll i = 0; i < str.size(); i++)
        {
            if (str[i] == '_')
            {
                if (str[i + 1] != '^')
                {
                    str.insert(i + 1, "^");
                }
            }
        }
        ll len2 = str.size() - len;
        if (str[0] == '_')
            len2++;
        if (len2 == 0 && str[0] == '^' && len == 1)
            len2++;
        cout << len2 << endl;
        // for(ll i=0;i<str.size();i++){
        //     cout << str[i];
        // }
    }
}