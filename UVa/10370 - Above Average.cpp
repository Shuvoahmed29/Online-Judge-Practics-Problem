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
int main()
{
int i,j,n,m;
double sum,average,avobe,a[1000],count;
while(scanf("%d",&n)==1)
{
    for(i=0;i<n;i++)
    {   sum=0;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
           scanf("%lf",&a[j]);
           sum+=a[j];
        }
        average=(double)(sum/m);
        count=0;
        for(j=0;j<m;j++)
        {
            if(average<a[j])
            {
              count++;
            }
        }
        avobe=(double)(100*count/m);
        printf("%.3lf%",avobe);
        cout<<"%\n";
    }
}
return 0;
}
