#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4],p=0,q=0,ans=0;
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        int fmax=arr[0];
        p=0;
        for(int i=1;i<4;i++){
            if(fmax<arr[i]){
                fmax=arr[i];
                p=i;
            }
        }
        int smax;
        if(p==0){
            smax=arr[1];
        }
        else{
            smax=arr[0];
        }
        q=0;
        for(int i=1;i<4;i++){
            if(smax<arr[i] && i!=p){
                smax=arr[i];
                q=i;
            }
        }
        if((p==2&&q==3)||(p==3&&q==2)){
            cout<<"NO"<<endl;
        }
        else if((p==0&&q==1)||(p==1&&q==0)||(p==0&&q==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}