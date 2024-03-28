#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        p=arr[1]-arr[0];
        for(int i=1;i<n-1;i++){
            k=arr[i+1]-arr[i];
        if(p>k){
            p=k;
        }
        }
    cout<<p<<endl;
    }
    return 0;
}