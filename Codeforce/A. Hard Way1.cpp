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
#define o cout
#define i cin
#define yes "YES"
#define no "NO"

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    ll t;
    i>>t;
    while(t--){
        ll x1,x2,x3,y1,y2,y3;
        double sum=0.0;
        i>>x1>>y1;
        i>>x2>>y2;
        i>>x3>>y3;
        if(y1==y2 && y2>y3)sum+=abs(x2-x1);
        if(y2==y3 && y2>y1)sum+=abs(x3-x2);
        if(y3==y1 && y3>y2)sum+=abs(x1-x3);
        cout<<fixed<<setprecision(8)<<sum<<nl;
    }
}