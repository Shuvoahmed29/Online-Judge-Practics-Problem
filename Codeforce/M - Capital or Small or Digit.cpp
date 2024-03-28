#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 48 && ch <= 57)
        cout << "IS DIGIT\n";
    else if (ch >= 65 && ch <= 90)
        cout << "ALPHA\nIS CAPITAL\n";
    else
        cout << "ALPHA\nIS SMALL\n";
}