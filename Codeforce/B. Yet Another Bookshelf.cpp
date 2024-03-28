#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, f, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                f = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                l = i;
            }
        }
        for (int i = f; i <= l; i++)
        {
            if (arr[i] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}