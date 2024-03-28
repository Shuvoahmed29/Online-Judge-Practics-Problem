#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int year = n / 365;
    n -= (365 * year);
    long long int month = n / 30;
    n -= (month * 30);
    cout << year << " years\n";
    cout << month << " months\n";
    cout << n << " days\n";
}