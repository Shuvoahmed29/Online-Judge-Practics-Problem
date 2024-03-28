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
#define vi vector<ll>
#define yes "YES"
#define no "NO"

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
void solve()
{
    ll n,diff;
    cin>>n;
    if (n%3==0)
    {
        diff=n/3;
        For(i,diff)cout<<21;
    }
    if (n%3==2)
    {
        diff=n/3;
        For(i,diff)cout<<21;
        cout<<2;
    }
    if (n%3==1)
    {
        diff=n/3;
        For(i,diff)cout<<12;
        cout<<1;
    }
    cout<<nl;
    /*ll sum=0,p=n;
    while(n--)
    {
        if(n%3==1 && sum<=p)
        {
            cout<<1;
            sum+=1;
        }
        else
        {
            cout<<2;
            sum+=2;
        }
    }
    cout<<nl;*/
}
int main()
{
    ll t;
    cin>>t;
    while(t--)solve();
}
