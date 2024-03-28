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
inline void solve();//mtc
/*-----------------SHUVO AHMED--------------------------------*/
inline bool ismul(ll n ){
    return n % 9==0;
}
int main(){
    fast;
    solve();
}
inline void solve(){
    string str;
    while(cin>>str){
        if(str=="0")break;
        ll sum=0,deg=0;
        For(i,str.size())sum+=str[i]-'0';
        ll copy=sum;
        while(ismul(sum)){
            deg++;
            if(sum==9)break;
            copy=0;
            while(sum!=0){
                copy+=sum%10;
                sum/=10;
            }
            sum=copy;
        }
        if(deg)cout<<str<<" is a multiple of 9 and has 9-degree "<<deg<<"."<<nl;
        else cout<<str<<" is not a multiple of 9."<<nl;
    }
}