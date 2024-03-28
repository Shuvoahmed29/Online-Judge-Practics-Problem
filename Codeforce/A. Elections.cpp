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
#define fast     ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,p=0;
        cin>>a>>b>>c;
        ll m=max3(a,b,c);
       
        if(a==m && b==m){
        if(a==m && m!=0)cout<<p+1<<" ";
        else cout<<(m-a)+1<<" ";
        if(b==m && m!=0)cout<<p+1<<" ";
        else cout<<(m-b)+1<<" ";
        cout<<(m-c)+1<<nl;
        }
        
        else if(a==m && c==m){
        if(a==m && m!=0)cout<<p+1<<" ";
        else cout<<(m-a)+1<<" ";
        cout<<(m-b)+1<<" ";
        if(c==m && m!=0)cout<<p+1<<nl;
        else cout<<(m-c)+1<<nl;
        }

        else if(b==m && c==m){
        cout<<(m-a)+1<<" ";
        if(b==m && m!=0)cout<<p+1<<" ";
        else cout<<(m-b)+1<<" ";
        if(c==m && m!=0)cout<<p+1<<nl;
        else cout<<(m-c)+1<<nl;
        }

        else if(a==m && b==m && c==m){
        if(a==m && m!=0)cout<<p+1<<" ";
        else cout<<(m-a)+1<<" ";
        if(b==m && m!=0)cout<<p+1<<" ";
        else cout<<(m-b)+1<<" ";
        if(c==m && m!=0)cout<<p+1<<nl;
        else cout<<(m-c)+1<<nl;
        }

        else if(a==m || b==m || c==m){
        if(a==m && m!=0)cout<<p<<" ";
        else cout<<(m-a)+1<<" ";
        if(b==m && m!=0)cout<<p<<" ";
        else cout<<(m-b)+1<<" ";
        if(c==m && m!=0)cout<<p<<nl;
        else cout<<(m-c)+1<<nl;
        }
    }
}