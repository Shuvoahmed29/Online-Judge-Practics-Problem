#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, s, m, ans;
        cin >> n >> s;
        m = n / 2 + 1;
        ans = s / m;
        cout << ans << "\n";
    }
    return 0;
}