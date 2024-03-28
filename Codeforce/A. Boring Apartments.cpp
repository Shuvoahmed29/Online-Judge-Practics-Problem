#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,k;
        cin>>n;
        r=n%10;
        k=(r-1)*10;
        if(n<10){
            k=k+1;
        }
        else if(n<100){
            k=k+3;
        }
        else if(n<1000){
            k=k+6;
        }
        else if(n<10000){
            k=k+10;
        }
        cout<<k<<endl;
    }
    return 0;
}