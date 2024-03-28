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
    string str;
    char s[1024];
    cin>>str;
    ll p=0,k=0;
    for(int i=str.size()-1;i>=0;i--){
        if(p!=3){
            s[k]=str[i];
            k++;
            p++;
        }
        if(p==3){
            s[k]=',';
            k++;
            p=0;
        }
    }
    ll q=0;
    char ch[k];
    for(int i=k-1;i>=0;i--){
       ch[q]=s[i];
       q++;
    }
    if(ch[0]!=',')cout<<ch[0];
    for(int i=1;i<q;i++){
        cout<<ch[i];
    }
    cout<<nl;
}