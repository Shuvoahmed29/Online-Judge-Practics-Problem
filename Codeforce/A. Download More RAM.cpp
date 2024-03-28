#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define yes "YES\n"
#define no "NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define main int main(){fast;tc;}
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi 3.14159265358979323846
void solve();
/*-----------------SHUVO AHMED--------------------------------*/
main
void solve()
{
    ll n,ram;
    cin>>n>>ram;
    ll arr[n];
    ll brr[n];
    vector< pair <ll,ll> > vec;
    For(i,n)cin>>arr[i];
    For(i,n)cin>>brr[i];
    For(i,n)vec.push_back( make_pair(arr[i],brr[i]));
    Sort(vec);
    For(i,n)if(ram>=vec[i].first)ram+=vec[i].second;
    cout<<ram<<nl;
}


