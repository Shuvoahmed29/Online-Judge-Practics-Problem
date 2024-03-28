#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,p=0,cunt=0;
    cin>>n>>x;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            int j=x/i;
            if(i<=n&&j<=n){
                cunt=cunt+2;
            }
            if(i==j){
                cunt=cunt-1;
            }
        }
    }
    if(cunt<=0)
        cunt=0;
    cout<<cunt<<endl;
    return 0;
}