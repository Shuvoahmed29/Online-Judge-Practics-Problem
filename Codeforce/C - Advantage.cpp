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
        vector<int> vec, temp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        temp = vec;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != temp[n - 1])
                cout << vec[i] - temp[n - 1] << " ";
            else
            {
                cout << vec[i] - temp[n - 2] << " ";
            }
        }
        cout << endl;
    }
}