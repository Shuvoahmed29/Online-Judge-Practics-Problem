#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec, v1;
    int a, b, c;
    cin >> a >> b >> c;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    v1 = vec;
    sort(vec.begin(), vec.end());
    for (auto it : vec)
        cout << it << endl;
    cout << endl;
    for (auto it : v1)
        cout << it << endl;
}