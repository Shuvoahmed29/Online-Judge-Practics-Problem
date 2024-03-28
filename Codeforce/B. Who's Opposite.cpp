#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,sub,ans,maxi;
        cin>>a>>b>>c;
        sub=abs(a-b);
        maxi=max(a,max(b,c));
        if(maxi>sub*2){
            cout<<-1<<"\n";
        }
        else{
            if(c<=sub){
                ans=c+sub;
            }
            else{
                ans=c-sub;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}