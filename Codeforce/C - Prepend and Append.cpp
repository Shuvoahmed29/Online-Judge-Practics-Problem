#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cunt = n;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0' && str[n - i - 1] == '1')
                cunt -= 2;
            else if (str[i] == '1' && str[n - i - 1] == '0')
                cunt -= 2;

            else if (str[i] == '1' && str[n - i - 1] == '1')
                break;
            else if (str[i] == '0' && str[n - i - 1] == '0')
                break;
        }
        if (cunt >= 0)
            cout << cunt << endl;
        else
            cout << 0 << endl;
    }
}