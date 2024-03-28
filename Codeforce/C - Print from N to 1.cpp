#include <bits/stdc++.h>

using namespace std;
int solve(int n)
{
    if (n > 0)
        cout << n;
    if (n == 1)
        cout << '\n';
    else
        cout << ' ';
    if (n >= 0)
        solve(n - 1);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}