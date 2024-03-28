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
    fast;
    solve();
}
void solve(){
    ll t;
    cin>>t;
    for(ll k=0;k<t;k++){
    string str;  
    cin>>str;
    Sort(str);
    cout<<"Case "<<k+1<<": ";
    ll cunt=1,p=0;
    ll len=str.size(),w=0;
    for(ll i=0;i<len-1;i++){
        if(str[i]==str[i+1])cunt++;
        else{
            for(ll j=1;j<=cunt;j++)if(cunt%j==0)p++;
            if(p==2){
                cout<<str[i];
                w++;
            }
            cunt=1;
            p=0;
        }
    }
    if(cunt!=1){
        for(ll j=1;j<=cunt;j++)if(cunt%j==0)p++;
        if(p==2){
            cout<<str[len-1];
            w++;
        }
    }
    if(w==0)cout<<"empty";
    cout<<nl;
    }
}