#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    char c, ch;
    cin >> a >> c >> b >> ch >> n;
    if (c == '+')
    {
        if (a + b == n)
            cout << "Yes\n";
        else
            cout << a + b << endl;
    }
    if (c == '-')
    {
        if (a - b == n)
            cout << "Yes\n";
        else
            cout << a - b << endl;
    }
    if (c == '*')
    {
        if (a * b == n)
            cout << "Yes\n";
        else
            cout << a * b << endl;
    }
}