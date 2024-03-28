#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    string s = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFF";
    while (tt--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int p = 0, k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            string str2 = s.substr(i, i + n - k);
            k++;
            // cout << str2 << endl;
            if (str2 == str)
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
