#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cunt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'Q')
            continue;
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[j] != 'A')
                continue;
            for (int k = j + 1; k < str.size(); k++)
            {
                if (str[k] == 'Q')
                    cunt++;
            }
        }
    }
    cout << cunt << endl;
    return 0;
}