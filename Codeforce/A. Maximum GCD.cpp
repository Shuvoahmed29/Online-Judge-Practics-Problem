#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,maxi=1;
        cin>>n;
        if(n>=2){
            maxi=n/2;
            cout<<maxi<<endl;
        }
        else{
            maxi=1;
            cout<<maxi<<endl;
        }
    }
    return 0;
}