#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,di=0,al=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            di++;
        }
        else{
            al++;
        }
    }
    if(al>=1){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}