#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    string str;
    while (t--)
    {
        int w = 0;
        cin >> n;
        cin >> str;
        vector<int> A(26, 0);
        A[str[0] - 'A'] = 1;
        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
            {
                continue;
            }
            else
            {
                if (A[str[i] - 'A'] > 0 && w == 0)
                {
                    cout << "NO" << endl;
                    w = 1;
                }
            }
            A[str[i] - 'A'] = 1;
        }
        if (w == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}