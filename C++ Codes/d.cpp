#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long int ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    int start = 0, end = 0;
    int ncas;
    for (int i = 0; i <v1.size() - 1; i++)
        if (v1[i] == v1[i + 1])
        {
            start = i;
            break;
        }
    for (ll i = v1.size() - 1; i > 0; i--)
        if (v1[i] == v1[i - 1])
        {
            end = i;
            break;
        }
    ncas = end - start + 1;
    if (ncas < 3)
        cout << 0 << endl;
    else if (ncas == 4 || ncas == 3)
        cout << 1 << endl;
    else
        cout << ncas - 3 << endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
