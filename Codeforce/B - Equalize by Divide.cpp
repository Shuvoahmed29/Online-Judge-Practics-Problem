#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int cunt = 0;
        double x;
        vector<pair<int, int>> vec;
        for (int j = 0; j < 30 * n; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] != arr[i + 1])
                {
                    if (arr[i] > arr[i + 1])
                    {
                        x = ((double)arr[i] / (double)arr[i + 1]);
                        arr[i] = ceil(x);
                        // cout << "ok: "<< ceil(x) << endl;
                        vec.push_back(make_pair(i + 1, i + 2));
                    }
                    else
                    {
                        x = ((double)arr[i + 1] / (double)arr[i]);
                        arr[i + 1] = ceil(x);
                        vec.push_back(make_pair(i + 2, i + 1));
                    }
                    cunt++;
                }
            }
        }
        sort(arr, arr + n);
        // for(int i=0;i<n;i++){
        //     cout << arr[i] << " ";
        // }
        // cout <<endl << "..................."<<endl;
        if (arr[0] == arr[n - 1] && cunt == 0)
            cout << 0 << endl;
        else if (arr[0] != arr[n - 1])
            cout << -1 << endl;
        else if (arr[0] == arr[n - 1])
        {
            cout << cunt << endl;
            for (auto it : vec)
            {
                cout << it.first << " " << it.second << endl;
            }
        }
    }
}