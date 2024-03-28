#include <bits/stdc++.h>
using namespace std;
/*-----------------------SHUVO AHMED---------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (ll i = x; i <= y; i++)

#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define vp vector<pair<ll, ll>>
#define Pin(x, y) pb(mp(x, y))
#define sl set<ll>
#define Rs set<ll, greater<ll>> // Reverse Set
#define In(x) insert(x)         // or use emplace(x)
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define ff first
#define ss second
#define rr return 0

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc       \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
inline void solve();
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shuvo cout.tie(NULL);
#define mtc               \
    int main()            \
    {                     \
        Code By Shuvo tc; \
        rr;               \
    }
#define shuvo                  \
    int main()                 \
    {                          \
        Code By Shuvo solve(); \
        rr;                    \
    }

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi acos(-1)
void TREE(ll node, vector<vector<ll>> &vec, ll par, ll &idx, vector<vector<ll>> &A, unordered_map<ll, ll> &H)
{
    if (par == -1)
    {
        H[node] = ++idx;
        A[idx].push_back(node);
    }
    else
    {
        ll idx = H[par];
        A[idx].push_back(node);
        H[node] = idx;
    }
    for (ll i = 0; i < vec[node].size(); i++)
    {
        if (i == 0)
        {
            TREE(vec[node][i], vec, node, idx, A, H);
        }
        else
        {
            TREE(vec[node][i], vec, -1, idx, A, H);
        }
    }
}
/********If Something goes over your head,run after it.********/ // shuvo
/*-----------------------SHUVO AHMED---------------------------*/ mtc inline void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> A(n + 1);
    unordered_map<ll, ll> H;
    vector<ll> vec(n + 1);

    vector<vector<ll>> Tree(n + 1);
    ll root;
    for (ll i = 1; i <= n; i++)
    {
        cin >> vec[i];
        if (vec[i] == i)
        {
            vec[i] = -1;
            root = i;
            continue;
        }
        Tree[vec[i]].pb(i);
    }
    H[root] = 0;
    ll idx = 0;

    TREE(root, Tree, root, idx, A, H);
    cout << idx + 1 << nl;
    for (ll i = 0; A[i].size() != 0; i++)
    {
        // ans
        cout << A[i].size() << nl;
        for (ll j = 0; j < A[i].size(); j++)
            cout << A[i][j] << " ";
        cout << nl;
    }
    cout << nl;
}