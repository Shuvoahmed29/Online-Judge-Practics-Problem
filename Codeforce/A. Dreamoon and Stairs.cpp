#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a=0;
    cin>>n>>m;
    if(n>=m){
        for(int i=0;i<10000;i++){
            a=a+m;
            if(2*a>=n){
                cout<<a<<"\n";
                return 0;
            }
        }
    }
    else{
        cout<<-1<<"\n";
        return 0;
    }
}