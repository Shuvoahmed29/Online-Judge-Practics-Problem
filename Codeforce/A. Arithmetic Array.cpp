#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(sum==n){
            cout<<0<<"\n";
        }
        else if(sum>n){
            cout<<sum-n<<"\n";
        }
        else if(sum<n){
            cout<<1<<"\n";
        }
    }
    return 0;
}