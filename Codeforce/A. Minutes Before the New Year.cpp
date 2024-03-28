#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m, ans = 0;
        cin >> h >> m;
        ans = (23 - h) * 60;
        ans = ans + (60 - m);
        cout << ans << endl;
    }
    return 0;
}