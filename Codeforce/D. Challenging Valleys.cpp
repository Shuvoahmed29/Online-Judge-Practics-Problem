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
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        int cunt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (cunt != 0)
                break;
            if (vec[i] < vec[i + 1])
            {
                cunt++;
                while (vec[i + 1] >= vec[i] && i < n - 1)
                {
                    i++;
                }
                if (i == n - 1)
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if (cunt == 0)
            cout << "YES" << endl;
    }
}