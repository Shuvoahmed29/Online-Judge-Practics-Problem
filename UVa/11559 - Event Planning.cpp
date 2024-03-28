#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define pb(x) push_back(x)

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
    ll p,b,h,w,bed,price,cost;
    ll arr[10000],len;
    while(cin>>p>>b>>h>>w)
    {
        len=0;
        for(int i=1; i<=h; i++)
        {
            cin>>price;
            for(int j=1; j<=w; j++)
            {
                cin>>bed;
                if(bed>=p)
                {
                    cost=p*price;
                    if(cost<=b)
                        arr[len++]=cost;
                }
            }
        }
        if(len==0)cout<<"stay home\n";
        else
        {
            sort(arr,arr+len);
            cout<<arr[0]<<endl;
        }
    }
}
