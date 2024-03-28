#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n%2==0){
        for(int i=1;i<=n/2;i++){
            cout<<arr[i-1]<<" "<<arr[n-i]<<" ";
        }}
        else{
            for(int i=1;i<=(n/2);i++){
            cout<<arr[i-1]<<" "<<arr[n-i]<<" ";
        }
        n=(n/2)+1;
        cout<<arr[n-1]; 
        }
        cout<<endl;
    }
    return 0;
}
