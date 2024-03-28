#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tt, i, j, cunt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        vector<long long> vec(n);
        for (i = 0; i < n; i++)
            cin >> vec[i];
        cunt = 0;
        vector<long long> vec1;
        for (i = 0; i < n; i++)
        {
            bitset<32> b(vec[i]);
            for (j = b.size() - 1; j >= 0; j--)
            {
                if (b[j] == 1)
                {
                    vec1.push_back(j);
                    break;
                }
            }
        }
        map<long long, long long> mp;
        for (auto it : vec1)
        {
            mp[it]++;
        }
        for (auto it : mp)
        {
            // cout << it.first << " " << it.second << endl;
            if (it.second >= 2)
                cunt = cunt + (it.second * (it.second - 1) / 2);
        }
        cout << cunt << '\n';
    }
}