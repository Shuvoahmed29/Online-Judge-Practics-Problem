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

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec;
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            vec.pb(x);
        }
        ll l1=vec[n-1],l2=vec[n-2];
        bool dec=true;
        for(int i=0;i<n-1;i++){
            if(vec[i]>vec[i+1]){
                dec=false;
                break;
            }
        }
        if(dec){
            cout<<0<<nl;
            continue;
        }
        if(l2-l1<=l2 && l2<=l1){
            cout<<n-2<<nl;
            for(int i=0;i<n-2;i++){
                cout<<i+1<<" "<<n-1<<" "<<n<<nl;
            }
            continue;
        }
        cout<<-1<<nl;
    }
}