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
int main()
{
    ll t,n,i,j=0,r,l,v;
    char str[100],pos[130],sb[10];
    cin>>t;
    while(t--)
    {
        j=1;
        r=0;l=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>str;
        if(str[0]=='R')
        {
            r++;
            pos[j++]='R';
        }
        else if(str[0]=='L')
        {
            l++;
            pos[j++]='L';
        }
        else if(str[0]=='S')
        {
            cin>>sb;
            cin>>v;
            if(pos[v]=='R')
            {
                r++;
                pos[j++]='R';
            }
            else
            {
                l++;
                pos[j++]='L';
            }
        }
        }
        cout<<r-l<<nl;
    }
}