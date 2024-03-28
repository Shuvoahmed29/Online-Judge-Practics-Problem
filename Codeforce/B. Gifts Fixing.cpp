#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,a,b;
        long long int mini1=1e18,mini2=1e18;
        long long int cunt=0;
        cin>>n;
        long long int fst[n],sec[n];
        for(int i=0;i<n;i++){
            cin>>fst[i];
            mini1=min(mini1,fst[i]);
        }
         for(int i=0;i<n;i++){
            cin>>sec[i];
            mini2=min(mini2,sec[i]);
        }
        for(int i=0;i<n;i++){
            cunt=cunt+max((fst[i]-mini1),(sec[i]-mini2));
        }
        cout<<cunt<<endl;
    }
    return 0;
}