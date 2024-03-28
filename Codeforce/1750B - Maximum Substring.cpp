#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string str;
        cin >> str;
        long long one = 0, zero = 0;
        long long cunt = 1;
        for (long long i = 0; i < n; i++)
        {
            if (str[i] == '1')
                one++;
            else
                zero++;
        }
        long long ans = one * zero;

        for (long long i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
                cunt++;
            else
            {
                ans = max(ans, cunt * cunt);
                cunt = 1;
            }
        }
        ans = max(ans, cunt * cunt);
        cout << ans << endl;
    }
}