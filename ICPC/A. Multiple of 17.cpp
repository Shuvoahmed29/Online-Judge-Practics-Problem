#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        long long int n;
        cin >> n;
        if (n == 0)
            break;
        long long int p, l;
        p = n / 10;
        l = n - p * 10;
        n = p - 5 * l;
        if (n % 17 == 0)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}