#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c;
    int x1, x2, x3;
    x1 = a + b + c;
    x2 = (2 * a) + (2 * b);
    int mini = min(b, a);
    x3 = (mini * 2) + (2 * c);
    ans = min(x1, min(x2, x3));
    cout << ans << endl;
    return 0;
}