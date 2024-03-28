#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=max(a,b);
    c=(6-c)+1;
    if(6%c==0){
        cout<<(1)<<"/"<<(6/c);
    }
    else if(c==4){
        cout<<(c/2)<<"/"<<(6/2);
    }
    else if(c==0){
        cout<<0<<"/"<<1;
    }
    else {
        cout<<c<<"/"<<6;
    }
    return 0;
}