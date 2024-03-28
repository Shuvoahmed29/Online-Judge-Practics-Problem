#include<bits/stdc++.h>
using namespace std;
int main(int argc, char){
    int t,p=1;
    cin>>t;
    int arr[10000];
    for(int i=1; i<=10000 ;i++) {
        if(i%3!=0 && i%10!=3) {
            arr[p]=i;
            p++;
        }
    }
    while(t--){
        int k;
        cin>>k;
        cout<<arr[k]<<endl;
    }
    return 0;
}