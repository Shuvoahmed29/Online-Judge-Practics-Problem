#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        if (n > 3)
        {
            cout << arr[1] << " ";
            cout << arr[0] << " ";
            cout << arr[n - 1] << " ";
            for (int i = 2; i < n - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if (n == 2)
        {
            cout << arr[1] << " ";
            cout << arr[0] << endl;
        }
        else if (n == 3)
        {
            cout << arr[1] << " ";
            cout << arr[n - 1] << " ";
            cout << arr[0] << endl;
        }
    }
    return 0;
}