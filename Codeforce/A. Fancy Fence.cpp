#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--){
       int a,ans;
       cin>>a;
       ans=360%(180-a);
       if(ans==0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
   return 0;
}