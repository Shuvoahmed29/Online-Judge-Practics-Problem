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
        vector<int> vec1(n), vec2(n);
        for (int i = 0; i < n; i++)
            cin >> vec1[i];
        for (int i = 0; i < n; i++)
            cin >> vec2[i];
        for (int i = 0; i < n; i++)
        {
            if (vec1[i] > vec2[i] && vec2[i] <= vec1[n - 1])
                swap(vec1[i], vec2[i]);
            // else if(vec1[i]<vec2[i] && vec2[i]>vec1[n-1]) swap(vec1[i],vec2[i]);
        }
        // for(int i=0;i<n;i++) cout << vec1[i] << " ";
        // cout << endl;
        // for(int i=0;i<n;i++) cout << vec2[i] <<" ";
        int p = vec1[n - 1], q = vec2[n - 1];
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        if (vec1[n - 1] == p && vec2[n - 1] == q)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}