#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, j, n, t;
        cin >> c >> j >> n;
        t = c / n;
        if (j == 0)
            cout << 0 << "\n";
        else if (t > j)
            cout << j << "\n";
        else
        {
            int rem, f, ans;
            f = t;
            j = j - t;
            n = n - 1;
            rem = j % n;
            if (rem != 0)
                rem = 1;
            ans = rem + (j / n);
            ans = f - ans;
            cout << ans << "\n";
        }
    }
    return 0;
}