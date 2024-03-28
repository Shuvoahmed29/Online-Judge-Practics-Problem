#include <bits/stdc++.h>

using namespace std;
void binary(int n);
void isodd(int n)
{
    if (n % 2 == 0)
        cout << "NO" << '\n';
    else
        binary(n);
}
void binary(int n)
{
    int m = n, p = 0;
    vector<int> vec, v1;
    while (m != 0)
    {
        p = m % 2;
        m = m / 2;
        vec.push_back(p);
    }
    v1 = vec;
    reverse(vec.begin(), vec.end());
    if (v1 == vec)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
int main()
{
    int n;
    cin >> n;
    isodd(n);
}