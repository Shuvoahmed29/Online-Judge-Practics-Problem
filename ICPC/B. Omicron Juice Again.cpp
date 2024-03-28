#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, t;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c)
            printf("Case %d: Peaceful\n", i);
        else if ((a + b + c) % 3 != 0 || d == 0)
            printf("Case %d: Fight\n", i);
        else
        {
            int avg = (a + b + c) / 3;
            if ((avg - a) % d == 0 && (avg - b) % d == 0 && (avg - c) % d == 0)
                printf("Case %d: Peaceful\n", i);
            else
                printf("Case %d: Fight\n", i);
        }
    }
    return 0;
}
