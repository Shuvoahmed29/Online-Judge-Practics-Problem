#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    p=n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            p=n-i;
            if(p==0){
                cout<<"Mahmoud"<<endl;
                return 0;
            }
        }
        else{
            p=n-i;
             if(p==0){
                cout<<"Ehab"<<endl;
                return 0;
            }
        }
    }
}