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

int main()
{
    ll t;
    cin>>t;
    string s,str;
    char temp;
    for(int i=0;i<t;i++){
        cin>>str;
        cin>>s;
        ll len=str.size();
        string s1="abc";
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
        }
        ll m=0;
        string ans;
        if(s1==s && str[0]=='a'){
            for(int i=0;i<len;i++){
                if(str[i]!='b' && str[i]<='c'){
                    cout<<str[i];
                }
            }
            for(int i=0;i<len;i++){
                if(str[i]=='b' && str[i]<='c'){
                    cout<<str[i];
                }
            }
             for(int i=0;i<len;i++){
                if(str[i]>'c'){
                    cout<<str[i];
                }
            }
            cout<<nl;
        }
        else{
            cout<<str<<nl;
        }
    }
}