#include <bits/stdc++.h>

using namespace std;
void SWAP(int n, int m)
{
    int temp = n;
    n = m;
    m = temp;
    cout << n << " " << m << '\n';
}
int main()
{
    int n, m;
    cin >> n >> m;
    SWAP(n, m);
}