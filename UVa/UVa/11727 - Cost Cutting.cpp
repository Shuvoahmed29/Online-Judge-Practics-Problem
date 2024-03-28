#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[3];
    for(int j=1;j<=t;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<"Case "<<j<<": "<<arr[1]<<endl;
    }
    return 0;
}