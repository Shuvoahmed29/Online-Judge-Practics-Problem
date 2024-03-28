#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cunt=1,p=0;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                cunt++;
            }
        }
        if(cunt==2&&m!=i){
            cout<<"NO\n";
            return 0;
        }
        else if(cunt==2 && m==i){
                cout<<"YES\n";
                return 0;
            }
            else{
                cunt=1;
            }
    }
    cout<<"NO\n";
    return 0;
}