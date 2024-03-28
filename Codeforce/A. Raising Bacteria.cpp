#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, i = 0;
    cin >> n;
    int binaryNum[32];
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        if (binaryNum[i] == 1)
        {
            ans++;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}