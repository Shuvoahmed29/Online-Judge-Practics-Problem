#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,sub;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        else if(a>b){
            sub=a-b;
            if(sub%2==0){
                cout<<1<<endl;
                continue;
            }
            else{
                cout<<2<<endl;
                continue;
            }
        }
        else{
            sub=b-a;
            if(sub%2!=0){
                sub=1;
            }
            else{
                sub=2;
            }
            cout<<sub<<endl;
            continue;
        }
    }
    return 0;
}