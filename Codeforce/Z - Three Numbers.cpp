#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, s, ans = 0;
    cin >> k >> s;
    for (long long i = 0; i <= k; i++)
    {
        for (long long j = 0; j <= k; j++)
        {
            if (i + j <= s & (s - (i + j)) <= k)
                ans++;
        }
    }
    cout << ans << endl;
}