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
    int n,m,j,cunt,ans;
    while(scanf("%d %d", &n, &m)!=EOF){
        ans=0;
        cout<<n<<" "<<m<<" ";
        if(n>m) swap(n,m);
        for(int i=n; i<=m; i++){
            cunt=1,j=i;
            while(j > 1){
                if(j % 2==0)j = j/2;
                else j = (3*j)+1;
                cunt++;
            }
            if(cunt>=ans) ans=cunt;
        }
       cout<<ans<<nl;
    }
}