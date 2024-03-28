#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a, b;
    static int w1 = 1;
    long long sze = 0, v = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        sze = sze - b;
        sze = sze + a;
        v = max(v, sze);
    }
    cout << "Case " << w1 << ": " << v << endl;
    w1++;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}