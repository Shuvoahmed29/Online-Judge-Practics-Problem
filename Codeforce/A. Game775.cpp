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
        ll n;
        cin>>n;
        ll arr[n];
        For(i,n)cin>>arr[i];
        ll i=0;
        while(arr[i]==1)i++;
        i=i-1;
        ll w=n-1;
        while(arr[w]==1)w--;
        w++;
        if(w>i){
            cout<<w-i<<nl;
            continue;
        }
        cout<<0<<nl;  
    }
}