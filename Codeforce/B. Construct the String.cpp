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
#define pb push_back
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    ll t;
    cin>>t;
    while(t--){
        string str="abcdefghijklmnopqrstuvwxyz";
        ll n,a,b;
        cin>>n>>a>>b;
        ll p=0,e=0;
        char s[b];
        for(int i=0;i<b;i++){
            cout<<str[i];
            s[e]=str[i];
            p++;
            e++;
        }
        ll w=a-b;
        ll c=0;
        while(w--){
            if(c==e)c=0;
            
            cout<<s[c];
            c++;
            p++;
        }
        ll r=n-p;
        c=0;
        while(r--){
            if(c==e)c=0;
            
            cout<<s[c];
            c++;
        }
        cout<<nl;
    }
}