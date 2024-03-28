#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,d;
    cin>>n;
    int arr[n];
    int A[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    d=abs(arr[0]-arr[n-1]);
    A[0]=d;
    for(int i=0;i<n;i++){
        d=abs(arr[i]-arr[i+1]);
        A[i+1]=d;
    }
    sort(A,A+n);
    d=abs(arr[0]-arr[n-1]);
    if(d==A[0]){
            cout<<n<<" "<<1<<endl;
            return 0;
    }
    for(int i=0;i<n;i++){
        d=abs(arr[i]-arr[i+1]);
        if(d==A[0]){
            cout<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
}