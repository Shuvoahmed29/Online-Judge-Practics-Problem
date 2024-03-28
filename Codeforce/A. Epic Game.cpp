#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    while(1){
    int x=__gcd(a,c);
    c=c-x;
    if(c==0){
        cout<<0<<endl;
        return 0;
    }
    x=__gcd(c,b);
    c=c-x;
    if(c==0){
        cout<<1<<endl;
        return 0;
    }
    }
}