#include <bits/stdc++.h>

using namespace std;
int solve(string n)
{
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << '\n';
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string n;
        cin >> n;
        solve(n);
    }
}