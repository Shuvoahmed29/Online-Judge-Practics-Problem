#include <bits/stdc++.h>

using namespace std;
void solve(int n)
{
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    cout << mp.size() << '\n';
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}