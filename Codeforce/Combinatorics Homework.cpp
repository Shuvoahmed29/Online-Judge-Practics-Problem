#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int arr[3],m,sum=0,p;
        for(int i=0;i<3;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cin>>m;
        sort(arr,arr+3);
        if(m>sum-3)cout<<"NO\n";
        else{
            p=arr[2]-(arr[0]+arr[1]+1);
            if(m>=p)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}