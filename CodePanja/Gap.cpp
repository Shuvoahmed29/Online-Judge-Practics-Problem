#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    t++;
    while (t--)
    {
        string str;
        getline(cin, str);
        int cunt = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
                continue;
            else
                cunt++;
        }
        cout << cunt << endl;
    }
}