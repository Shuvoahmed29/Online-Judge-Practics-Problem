#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a / b) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << endl;
    double c = a / b;
    int d = a / b;
    if (c - 0.5 >= d)
        d = d + 1;
    cout << "round " << a << " / " << b << " = " << d << endl;
}