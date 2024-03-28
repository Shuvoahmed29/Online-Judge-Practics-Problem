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
        ll n,one;
        cin>>n>>one;
        ll arr[n];
        for(int i=0; i<n-one; i++)arr[i]=0;
        for(int i=n-one; i<n; i++)arr[i]=1;
        do{
            for(int i=0; i<n; i++)cout<<arr[i];
            cout<<nl;
        }
        while(next_permutation(arr, arr+n));
        if(t > 0)cout<<nl;
    }
}