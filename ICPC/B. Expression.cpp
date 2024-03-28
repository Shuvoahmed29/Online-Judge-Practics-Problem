#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int a, b, c, a1, a2, a3, a4, a5, a6, a7;
    cin >> a >> b >> c;
    a1 = a + b * c;
    a2 = a * (b + c);
    a3 = a * b * c;
    a4 = (a + b) * c;
    a5 = max(a1, a2);
    a6 = max(a5, a3);
    a7 = max(a6, a4);
    cout << a7 << '\n';
}