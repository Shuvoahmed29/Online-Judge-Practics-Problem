#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED---------------------------------*/
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
    ll t;
    cin>>t;
    while(t--){
    string str,sub;
    cin>>str;
    cin>>sub;
    ll len1=sub.size();
    ll arr[len1],p=0;
    ll len=str.size();
    for(int i=0;i<len1;i++){
        for(int j=0;j<len;j++){
            if(sub[i]==str[j]){
                arr[p]=j+1;
                p++;
            }
        }
    }
    ll sum=0,temp[len1-1];
    p=0;
    for(int i=0;i<len1-1;i++){
        sum=abs(arr[i+1]-arr[i]);
        temp[p]=sum;
        p++;
    }
    sum=0;
    for(int i=0;i<len1-1;i++){
        sum=sum+temp[i];
    }
    cout<<sum<<nl;
    }
    return 0;
}