#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        int ans = vec[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & vec[i];
        }
        cout << ans << endl;
    }
}