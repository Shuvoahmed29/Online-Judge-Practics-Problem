#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl          '\n'
typedef long long int ll;
#define Sort(x)        sort(x.begin(),x.end())
#define Reverse(x)     reverse(x.begin(),x.end())

#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       (a*(b/gcd(a,b)))
#define sq(x)          (x)*(x)
 
#define min3(a,b,c)       min(a,min(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max3(a,b,c)       max(a,max(b,c))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define pb(x)             push_back(x)
#define mod               1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    int t;
    cin>>t;
    while(t--){
    long long int n,l,r,k,sum=0,cunt=0,a,b=0;
    cin>>n>>l>>r>>k;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        if(vec[i]>=l && vec[i]<=r){
            sum=sum+vec[i];
            cunt++;
        }
        if(sum==k){
            cout<<cunt<<"\n";
            b=10;
            break;
        }
        else if(sum>k){
            cout<<cunt-1<<"\n";
            b=10;
            break;
        }
    }
    if(b!=10)
        cout<<cunt<<nl;
    }
    return 0;
}