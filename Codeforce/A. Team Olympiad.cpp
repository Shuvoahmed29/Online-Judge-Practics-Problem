#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    vector<int>v1,v2,v3;
    int p=0,m=0,s=0,k;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            v1.push_back(i);
            p++;
        }
        else if(a==2){
            v2.push_back(i);
            m++;
        }
        else if(a==3){
            v3.push_back(i);
            s++;
        }
    }
    k=min(p,min(m,s));
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;
    }
    return 0;
}