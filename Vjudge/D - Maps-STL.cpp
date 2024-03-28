#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    map<string, int> mp;
    map<string, int>::iterator it;

    while (tt--)
    {
        int x;
        cin >> x;
        string name;
        int mark = 0;
        if (x == 1)
        {
            cin >> name;
            cin >> mark;
            mp[name] += mark;
        }
        else if (x == 2)
        {
            cin >> name;
            mp.erase(name);
        }
        else if (x == 3)
        {
            cin >> name;
            cout << mp[name] << '\n';
        }
    }
    // for(it = mp.begin(); it != mp.end(); it++){
    // 	cout << it->first << ' ' << it->second << '\n';
    // }
}