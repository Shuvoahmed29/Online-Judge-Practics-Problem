#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int num = n;
        long long int odd = 0, even = 0;
        int multiplier = 1;
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                if (i != 0)
                    multiplier *= 10;
                even += (num % 10) * multiplier;
            }
            else
            {
                odd += (num % 10) * multiplier;
            }
            num = num / 10;
        }
        cout << (even + 1) * (odd + 1) - 2 << endl;
    }

    return 0;
}