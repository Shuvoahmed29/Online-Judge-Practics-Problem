#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,fact=1,mod=1000000007;
        cin>>n;
        n=n+n;
        for(int i=3; i<=n; i++){
            fact*=i;
            fact%=mod;
        }
        cout<<fact<<"\n";
    }
    return 0;
}