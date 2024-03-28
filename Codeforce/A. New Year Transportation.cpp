#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, a;
    cin >> n >> t;
    vector<int> vec;
    for (int i = 0; i < (n - 1); i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    for (int i = 0; i < (n - 1);)
    {
        i = i + vec[i];
        if (i == (t - 1))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}