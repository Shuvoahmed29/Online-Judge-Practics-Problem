#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int n, k, d, w, p;
    while (tt--)
    {
        cin >> n >> k >> d >> w;
        int ans = 0, cunt = 0;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        for (int i = 0; i < n; i++)
        {
            if (cunt == 0)
                p = vec[i] + w + d;
            if (vec[i] <= p && cunt < k)
            {
                cunt++;
                // cout << "ok: " << vec[i] << endl;
                // cout << "cunt: " << cunt << endl;
            }
            if (cunt >= k || vec[i + 1] > p)
            {
                cunt = 0;
                ans++;
                // cout << "Ans: " << ans << endl;
            }
        }
        if (cunt != 0)
            cout << ans + 1 << endl;
        else
            cout << ans << endl;
    }
}