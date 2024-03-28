#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n,p=0;
        cin>>a>>b>>n;
        while(max(a,b)<=n){
            if(a<b){
                a+=b;
            }
            else{
                b+=a;
            }
            p++;
        }
        cout<<p<<"\n";
    }
    return 0;
}