#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, mx = -1;
        cin >> n;
        vector<int> vec;
        int zero = 0, non_zero = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
                non_zero++;
            else
                zero++;
            mx = max(mx, x);
            vec.push_back(x);
        }
        int ans;
        if (zero == 0)
            ans = 0;
        else
        {
            if (non_zero >= zero - 1)
                ans = 0;
            else
            {
                if (mx == 1)
                    ans = 2;
                else
                    ans = 1;
            }
        }
        cout << ans << endl;
    }
}