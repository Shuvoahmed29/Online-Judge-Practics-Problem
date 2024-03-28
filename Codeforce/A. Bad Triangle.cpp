#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=arr[0]+arr[1];
        if(sum<=arr[n-1]){
            cout<<1<<" "<<2<<" "<<n<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}
