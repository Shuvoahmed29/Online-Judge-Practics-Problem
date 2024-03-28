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
        ll n,x;
        cin>>n;
        vector<ll>vec,ve,vo;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0)ve.pb(x);
            else vo.pb(x);
            vec.pb(x);
        }
        vector<ll>v1,v2;
        v1=ve;
        v2=vo;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(ve==v1 && vo==v2)cout<<"Yes\n";
        else cout<<"No\n";
    }
}