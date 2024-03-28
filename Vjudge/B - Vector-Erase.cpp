#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int idx;
    cin >> idx;
    vec.erase(vec.begin() + idx - 1);
    int a, b;
    cin >> a >> b;
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    cout << vec.size() << '\n';
    for (auto it : vec)
    {
        cout << it << ' ';
    }
}