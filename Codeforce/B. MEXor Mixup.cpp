#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[300000];
    for(int i=1;i<=300000;i++){
        arr[i]=(arr[i-1]^i);
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=arr[a-1];
        if(ans==b){
            cout<<a<<"\n";
        }
        else{
            if((b^ans)!=a){
                cout<<a+1<<"\n";
            }
            else{
                cout<<a+2<<"\n";
            }
        }
    }
    return 0;
}