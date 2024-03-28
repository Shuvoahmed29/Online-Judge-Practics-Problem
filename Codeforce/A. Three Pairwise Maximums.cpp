#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[3];
    while(t--){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[1]==arr[2]){
            cout<<"YES"<<endl;
            cout<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}