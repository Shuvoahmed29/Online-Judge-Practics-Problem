#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tt, n, i;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        vector<long long> vec(n), sum(n);
        for (i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        sum[0] = vec[0];
        for (i = 1; i < n; i++)
        {
            sum[i] = vec[i] + sum[i - 1];
        }
        bool ok = true;
        for (i = 1; i < n; i++)
        {
            if (sum[i - 1] < vec[i])
                ok = false;
        }
        if (vec[0] != 1)
            ok = false;
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}