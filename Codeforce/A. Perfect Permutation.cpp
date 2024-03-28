#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1 || n%2!=0){
        cout<<-1<<"\n";
        return 0;
    }
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    for(int i=0;i<n;i=i+2){
        cout<<arr[i+1]<<" "<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}