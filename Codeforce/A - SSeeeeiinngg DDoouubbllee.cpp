#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str;
        cin >> str;
        string str2 = str;
        reverse(str2.begin(), str2.end());
        str = str + str2;
        cout << str << endl;
    }
}