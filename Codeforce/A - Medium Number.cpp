#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a != min(a, min(b, c)) && a != max(a, max(b, c)))
            cout << a << endl;
        else if (b != min(a, min(b, c)) && b != max(a, max(b, c)))
            cout << b << endl;
        else if (c != min(a, min(b, c)) && c != max(a, max(b, c)))
            cout << c << endl;
    }
}