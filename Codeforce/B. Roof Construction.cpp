#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define pb(x) push_back(x)

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
        ll n1;
        cin>>n1;
        if(n1==2){
            cout<<1<<" "<<0<<nl;
            continue;
        }
        ll i=1;
        ll n2=2;
        while(n2<=n1){
            n2=n2*2;
            i++;
        }
        if((n1&n1-1)==0)
        n2/=2;
        n2/=2;
        for(int i=n1-1;i>=n2;i--){
            cout<<i<<" ";
        }
        cout<<0<<" ";
        for(int i=n2-1;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<nl;
    }
}