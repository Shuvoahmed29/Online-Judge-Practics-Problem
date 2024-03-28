#include <bits/stdc++.h>

using namespace std;
void oneton(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i != n)
            cout << ' ';
    }
}
int main()
{
    int n;
    cin >> n;
    oneton(n);
}