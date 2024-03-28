#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;
        vector<long long int> vec, temp;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            vec.push_back(x);
        }
        long long cunt1 = 0, cunt2 = 0, cunt3 = 0;
        long long one = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (vec[i] == 1)
                one++;
            else
                cunt1 += one;
        }
        temp = vec;
        for (long long int i = 0; i < n; i++)
        {
            if (temp[i] == 0)
            {
                temp[i] = 1;
                break;
            }
        }
        one = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (temp[i] == 1)
                one++;
            else
                cunt2 += one;
        }
        temp = vec;
        one = 0;
        for (long long int i = n - 1; i >= 0; i--)
        {
            if (temp[i] == 1)
            {
                temp[i] = 0;
                break;
            }
        }
        for (long long int i = 0; i < n; i++)
        {
            if (temp[i] == 1)
                one++;
            else
                cunt3 += one;
        }
        cout << max(cunt1, max(cunt2, cunt3)) << endl;
    }
}