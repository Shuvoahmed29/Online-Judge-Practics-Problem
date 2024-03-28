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
ll sum(char *str){
    ll n=0,p;
    while (*str){   
        if (*str >= 'a' && *str <= 'z') n= n+ *str - 96;
        else if (*str >= 'A' && *str <= 'Z') n=n+ *str - 64;
        str++;
    }
    while (n >= 10){
        p = 0;
        while (n!=0){
            p += n % 10;
            n= n/10;
        }
        n = p;
    }
    return n;
}
int main(){
    char s1[30], s2[30];
    ll ans1, ans2;
    while (gets(s1)){
        gets(s2);
        ans1 = sum(s1);
        ans2 = sum(s2);
        
        if (ans1< ans2) printf("%.2f %%\n", ans1 * 100.0 / ans2);
        else printf("%.2f %%\n", ans2 * 100.0 /ans1);
    }
}