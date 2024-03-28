#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c1,c2,r;
        cin>>n;
        r=n%3;
        c1=n/3;
        c2=n/3;
        if(r==0){
            cout<<c1<<" "<<c2<<endl;
        }
        else if(r==1){
            c1=c2+1;
            cout<<c1<<" "<<c2<<endl;
        }
        else if(r==2){
          c2=c1+1;
          cout<<c1<<" "<<c2<<endl;
        }
    }
    return 0;
}