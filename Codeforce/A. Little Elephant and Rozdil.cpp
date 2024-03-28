#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,mini,p;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    mini=arr[0];
    p=0;
    for(int i=1;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
            p=i;
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[0]==arr[i+1]){
            cout<<"Still Rozdil\n";
            return 0;
        }
    }
    cout<<p+1<<"\n";
    return 0;
}