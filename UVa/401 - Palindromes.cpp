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
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string c="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char,char>mp;
    for(int i=0;i<s.size();i++)
        mp[s[i]]=c[i];
    string str;
    while(cin>>str){
        string b="";
        string rev = string(str.rbegin(),str.rend());
        for(int i=0;i<rev.size();i++)b=b+mp[rev[i]];
        if(b==str && rev==str)
             cout<<str<<" -- is a mirrored palindrome."<<nl<<nl;
        else if(b==str)
            cout<<str<<" -- is a mirrored string."<<nl<<nl;
        else if(rev==str)
            cout<<str<<" -- is a regular palindrome."<<nl<<nl;
        else cout<<str<<" -- is not a palindrome."<<nl<<nl;
    }
}