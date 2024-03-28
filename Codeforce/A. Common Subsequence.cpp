#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(3*t--){
        int n,m,l=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int A[m];
        for(int i=0;i<m;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(arr[i]==A[j] && l==0){
                cout<<"YES\n";
                cout<<1<<" "<<arr[i]<<"\n";
                l=1;
                break;
            }
        }
        }
        if(l==0){
            cout<<"NO\n";
        }
    }
    return 0;
}