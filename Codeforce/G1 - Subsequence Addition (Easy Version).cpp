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
        vector<int> vec(n), sum(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        sum[0] = vec[0];
        for (int i = 1; i < n; i++)
            sum[i] = vec[i] + sum[i - 1];
        // for(auto it:sum) cout << it << " ";
        bool ok = true;
        for (int i = 1; i < n; i++)
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