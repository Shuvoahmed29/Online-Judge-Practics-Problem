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
        ll n,a;
        cin>>n;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            cin>>a;
            vec.pb(a);
        }
        ll h=1,p=0;
        for(int i=0;i<n;i++){
            if(vec[i]==0 && vec[i-1]==0){
                cout<<-1<<nl;
                p=1;
                break;
            }
            else if((vec[i]==1 && vec[i-1]==1) && i>=1){
                h=h+5;
            }
            else if(vec[i]==1){
                h=h+1;
            }
            else{
                h=h+0;
            }
        }
        if(p==0)
            cout<<h<<nl;
    }
}