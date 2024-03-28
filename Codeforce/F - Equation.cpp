#include <bits/stdc++.h>

using namespace std;
void solve(int x, int n)
{
    long long ans = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        ans = ans + pow(x, i);
    }
    cout << ans << '\n';
}
int main()
{
    int n, x;
    cin >> n >> x;
    solve(n, x);
}