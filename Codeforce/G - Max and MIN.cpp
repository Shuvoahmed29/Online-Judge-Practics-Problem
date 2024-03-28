#include <bits/stdc++.h>

using namespace std;
void max_and_min(int n)
{
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    cout << vec[0] << " " << vec[n - 1] << '\n';
}
int main()
{
    int n;
    cin >> n;
    max_and_min(n);
}