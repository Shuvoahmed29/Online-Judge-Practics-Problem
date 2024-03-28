#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, i = 1;
    cin >> n;
    while (n > 5 * i)
    {
        n = n - (5 * i);
        i = i * 2;
    }
    if (n / i <= 1)
    {
        cout << "Sheldon\n";
    }
    else if (n / i <= 2)
    {
        cout << "Leonard\n";
    }
    else if (n / i <= 3)
    {
        cout << "Penny\n";
    }
    else if (n / i <= 4)
    {
        cout << "Rajesh\n";
    }
    else if (n / i <= 5)
    {
        cout << "Howard\n";
    }
    return 0;
}