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
    cin>>t;
    while(t--){
        string str; 
        cin>>str;
        ll len=str.size();
        ll r,g,b,R,B,G;
        For(i,len){
            if(str[i]=='r')r=i;
            if(str[i]=='R')R=i;
            if(str[i]=='g')g=i;
            if(str[i]=='G')G=i;
            if(str[i]=='b')b=i;
            if(str[i]=='B')B=i;
        }
        if(R>r && B>b && G>g)cout<<yes<<nl;
        else cout<<no<<nl;
    }
}