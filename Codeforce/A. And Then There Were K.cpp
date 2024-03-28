#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=1;
        cin>>n;
      while(ans<=n){
          ans=ans*2;
      }
      cout<<ans/2 -1<<"\n";
    }
    return 0;
}