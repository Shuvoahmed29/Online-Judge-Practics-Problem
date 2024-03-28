#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int len, cunt = 0;
        len = str.size();
        cout << str;
        sort(str.begin(), str.end());
        if (len % 2 != 0)
        {
            cout << " --- not double char" << endl;
        }
        else
        {
            for (int j = 0; j < len; j++)
            {
                if (str[i] == str[i + 1])
                {
                    cunt++;
                }
            }
            if (cunt = len / 2)
            {
                cout << " --- double char" << endl;
            }
        }
    }
    return 0;
}