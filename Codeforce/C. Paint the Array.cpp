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

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        ll p=0;
        p=gcd(arr[0],p);
        for(int i=2;i<n;i=i+2){
            p=gcd(arr[i],p);
        }
        ll q=0;
        q=gcd(arr[1],q);
        for(int i=3;i<n;i=i+2){
            q=gcd(arr[i],q);
        }
        ll k=0,c=0;
        for(int i=0;i<n;i=i+2){
            if(arr[i]%q==0)k++;
        }
        for(int i=1;i<n;i=i+2){
            if(arr[i]%p==0)c++;
        }
        if(k==0)cout<<q<<nl;
        else if(c==0)cout<<p<<nl;
        else cout<<"0"<<nl;
    }
}