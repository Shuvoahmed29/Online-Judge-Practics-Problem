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

#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mtc int main(){fast;tc;}
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define mod 1000000007
#define pi 3.14159265358979323846
inline void solve();mtc
/*-----------------SHUVO AHMED--------------------------------*/
// int main(){
//     fast;
//     solve();
// }
inline void solve(){
    ll n,sum=0;
    cin>>n;
    vl vec;
    For(i,n){
        ll x;
        cin>>x;
        sum+=x;
        vec.pb(x);
    }
    if(n==1){
        yes;
        return;
    }
    map<ll,ll>mp;
    For(i,n)mp[vec[i]]++;
    
    priority_queue<ll>pq;
    pq.push(sum);
    bool ans=true;

    while(!pq.empty()){
        ll mx=pq.top();
        pq.pop();
        ll x=mx/2;
        ll y=mx-x;
        if(mp[x]>0)mp[x]--;
        else if(mp[x]==0 && x>1)pq.push(x);

        if(mp[y]>0)mp[y]--;
        else if(mp[y]==0 && y>1)pq.push(y);

        if(pq.size()>n+2){
            ans=false;
            break;
        }
    }
    For(i,n){
        if(mp[vec[i]]>0){
            ans=false;
            break;
        }
    }
    (ans)?yes:no;
}