#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double l, w;
    while (cin >> l >> w)
    {
        double ans = 1e9;
        if (l == 0 && w == 0)
            break;
        for (double i = l / 2; i <= l / 1.5; i = i + .001)
        {
            double p = sqrt(pow(i, 2) - pow(l - i, 2));
            double v = 2 * i + (w - p);
            if (v < ans)
            {
                // cout<<i<<endl;
                ans = min(v, ans);
                // cout<<ans<<endl;
            }
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
}