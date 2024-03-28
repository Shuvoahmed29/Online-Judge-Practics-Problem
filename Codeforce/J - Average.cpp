#include <bits/stdc++.h>

using namespace std;
void solve(int n)
{
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double p;
        cin >> p;
        ans += p;
    }
    printf("%.7lf\n", ans / n);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}