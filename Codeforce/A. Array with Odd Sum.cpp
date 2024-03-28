#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(2*t--){
        int n,even=0,odd=0,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
            if(arr[i]%2!=0){
                odd++;
            }
            else{
                even++;
            }
        }
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            if(even!=0 && odd!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}