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
bool prime(ll n){
    if(n<2) return false;
    for(ll i=2; i*i<=n; i++)
            if(n%i==0) return false;
    return true;
}
ll rev(ll n){
    ll b=0;
    while(n!=0){
            b = b*10 + n%10;
            n/=10;
        }
        return b;
}
int main(){
    ll n;
    while(cin>>n){
        if(prime(n)==false) cout<<n<<" is not prime.\n";
        else{
            if(prime(rev(n))==true && rev(n)!=n) cout<<n<<" is emirp.\n";
            else cout<<n<<" is prime.\n";
        }
    }
}