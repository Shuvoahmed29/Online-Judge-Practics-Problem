#include <bits/stdc++.h>

using namespace std;
int solve(int n)
{
    static int p = 1;
    if (p <= n)
        cout << p << '\n';
    p++;
    if (p <= n)
        solve(n);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}