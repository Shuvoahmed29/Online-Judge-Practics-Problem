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
#define mp(a,b) make_pair(a,b)
#define vp vector<pair<ll,ll>>
#define Pin(x,y) pb(mp(x,y))

#define ff first
#define ss second
#define rr return 0

#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
inline void solve();
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mtc int main(){fast;tc;rr;}

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi acos(-1)
mtc
/*-----------------SHUVO AHMED--------------------------------*/
// int main(){
//     fast;
//     solve();
//     rr;
// }
inline void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)arr[i]=i+1;
    if(n%2==0){
    for(ll i=0;i<n;i++){
        if(i%2==0)cout<<arr[i+1]<<" ";
        else if(i%2!=0)cout<<arr[i-1]<<" ";
    }
    cout<<nl;
    }
    else{
        cout<<3<<" "<<1<<" ";
        for(ll i=2;i<n;i++){
            if(i%2==0)cout<<arr[i-1]<<" ";
            else if(i%2!=0)cout<<arr[i-1]+2<<" ";
        }
        cout<<nl;
    }
}