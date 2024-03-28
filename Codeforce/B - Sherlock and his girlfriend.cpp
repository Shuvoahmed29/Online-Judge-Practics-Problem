#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool array[n];
    for (int i = 2; i <= n; i++)
        array[i] = true;
    vector<int> vec;
    for (int i = 2; i <= n; i++)
    {
        if (array[i] == true)
        {
            vec.push_back(i);
            for (int j = i; j <= n; j = j + i)
            {
                array[j] = false;
            }
        }
    }
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
        int p = 0;
        for (int i = 2; i <= n + 1; i++)
        {
            if (i == vec[p])
            {
                cout << 1 << " ";
                p++;
            }
            else
                cout << 2 << " ";
        }
        cout << endl;
    }
}