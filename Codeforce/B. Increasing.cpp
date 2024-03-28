#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        while (n--)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());
        int p = 0;
        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i] == vec[i + 1])
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}