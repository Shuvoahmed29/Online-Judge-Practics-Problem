#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=0,cunt=0;
    for(int i=1;i<n;i++){
        p=p+i;
        n=n-p;
        if(n>=0){
            cunt++;
        }
        else{
            break;
        }
    }
    if(cunt==0)
        cunt=1;
    cout<<cunt<<endl;
    return 0;
}