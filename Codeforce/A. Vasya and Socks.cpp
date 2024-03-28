#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a,p;
    a=n;
    p=m;
    for(int i=1;i<=100;i++){
        m=i*p;
        if(a>=m){
            a=a+1;
        }
    }
    cout<<a<<endl;
    return 0;
}