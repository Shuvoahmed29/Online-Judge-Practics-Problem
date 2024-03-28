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

#define For(i, n) for (int i = 0; i < n; i++)
typedef std::vector<ll> V;
#define     vi vector<int>
#define     vb vector<bool>
#define     vs vector<string>
#define     vl vector<ll>
#define yes "YES\n"
#define no "NO\n"

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
void solve()
{
    ll n,m,p=0;
    cin>>n>>m;
    string str[n];
    For(i,n)cin>>str[i];
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=0;j<m-1;j++)
        {
            if(str[i][j]=='0' && str[i][j+1]=='1'&&str[i+1][j]=='1'&&str[i+1][j+1]=='1')p=1;
            if(str[i][j]=='1' && str[i][j+1]=='1'&&str[i+1][j]=='0'&&str[i+1][j+1]=='1')p=1;
            if(str[i][j]=='1' && str[i][j+1]=='0'&&str[i+1][j]=='1'&&str[i+1][j+1]=='1')p=1;
            if(str[i][j]=='1' && str[i][j+1]=='1'&&str[i+1][j]=='1'&&str[i+1][j+1]=='0')p=1;
        }
    }
    if(p==1)cout<<no;
    else cout<<yes;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)solve();
}
