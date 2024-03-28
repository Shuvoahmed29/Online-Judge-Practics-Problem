#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n],cunt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=d) cunt++;
        }
        if(cunt==n){
            cout<<"YES"<<endl;
        }
        else{
            sort(arr,arr+n);
            int sum=arr[0]+arr[1];
            if(d>=sum){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}