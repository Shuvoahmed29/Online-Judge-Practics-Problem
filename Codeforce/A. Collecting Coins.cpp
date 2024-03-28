#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n,d,p;
        cin>>a>>b>>c>>n;
        p=max(a,max(b,c));
        d=a+b+c+n;
        if(d%3==0&&d/3>=p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}