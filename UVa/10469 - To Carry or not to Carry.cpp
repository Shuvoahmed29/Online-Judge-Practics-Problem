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
#define fst first
#define snd second

#define yes "YES\n"
#define no "NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mtc int main(){fast;tc;}
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi 3.14159265358979323846
void solve();//mtc
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    //fast;
    solve();
}
void solve(){
    ll n,m;
    while(cin>>n>>m){
        ll c=n^m;
        cout<<c<<nl;
    }
    // ll n,m;
    // while(cin>>n>>m){
    //     ll arr[32],brr[32],ans[32];
    //     For(i,32){arr[i]=0;brr[i]=0;}
    //     ll k=0,q=0;
    //     while(n!=0){
    //         arr[q]=n%2;
    //         q++;
    //         n=n/2;
    //     }
    //     while(m!=0){
    //         brr[k]=m%2;
    //         k++;
    //         m=m/2;
    //     }
    //     ll p=max(k,q),d=0;
    //     for(ll i=0;i<p;i++){
    //         if(arr[i]==0 && brr[i]==0)ans[d]=0;
    //         else if(arr[i]==1 && brr[i]==0)ans[d]=1;
    //         else if(arr[i]==0 && brr[i]==1)ans[d]=1;
    //         else if(arr[i]==1 && brr[i]==1)ans[d]=0;
    //         d++;
    //     }
    //     ll sum=0;
    //     for(ll i=0;i<d;i++){
    //         sum=sum+ans[i]*pow(2,d-i-1);
    //     }
    //     cout<<sum<<nl;
    // }
}