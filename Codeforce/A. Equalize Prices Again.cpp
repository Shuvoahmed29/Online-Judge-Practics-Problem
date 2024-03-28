#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int r=sum%n;
        if(r==0){
            sum=sum/n;
        }
        else{
            sum=sum/n +1;
        }
        cout<<sum<<endl;
    }
    return 0;
}