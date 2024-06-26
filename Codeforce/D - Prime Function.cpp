#include <bits/stdc++.h>

using namespace std;
bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;
        bool ans = isPrime(n);
        if (ans == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}