#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int n, m;
    while (tt--)
    {
        cin >> n >> m;
        int arr[m], arr2[n];
        for (int i = 0; i < m; i++)
            cin >> arr[i];
        set<int> s;
        for (int i = 1; i <= n; i++)
        {
            s.insert(i);
            arr2[i - 1] = 0;
        }
        int p = 0;
        for (int i = 0; i < m; i++)
        {
            if (s.find(arr[i]) == s.end())
            {
                s.insert(arr[i]);
                arr2[n - p - 1] = i + 1;
                p++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] == 0)
                cout << -1 << " ";
            else
                cout << arr2[i] << " ";
        }
        cout << endl;
    }
}