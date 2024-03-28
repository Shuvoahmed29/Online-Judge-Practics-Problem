#include <bits/stdc++.h>

using namespace std;
void solve(int n)
{
    int arr[n], cunt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            cunt++;
        else
            cout << arr[i] << ' ';
    }
    for (int i = 0; i < cunt; i++)
        cout << 0 << ' ';
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}