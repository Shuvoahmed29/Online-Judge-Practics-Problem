#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cunt = 0, cunt1 = 0;
        while (n % 2 == 0)
        {
            n = n / 2;
            cunt++;
        }
        while (n % 3 == 0)
        {
            n = n / 3;
            cunt1++;
        }
        if (n == 1 && cunt <= cunt1)
        {
            cout << 2 * cunt1 - cunt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}