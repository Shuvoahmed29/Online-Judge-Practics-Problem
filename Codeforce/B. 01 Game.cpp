#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int len=str.size();
        int zero=0,one=0;
        for(int i=0;i<len;i++){
            if(str[i]=='0')zero++;
            else one++;
        }
        int mini=min(zero,one);
        if(mini%2==0)cout<<"NET\n";
        else cout<<"DA\n";
    }
    return 0;
}