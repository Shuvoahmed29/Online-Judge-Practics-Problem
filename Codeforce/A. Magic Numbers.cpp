#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;

    int one=0,four=0,other=0,mult=0;
    if(str[0]=='4'){
        cout<<"NO\n";
        return 0;
    }

    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            one++;
        }
        else if(str[i]=='4'){
            four++;
        }
        else{
            other++;
        }
        if(str[i]=='4'&&str[i+1]=='4'&&str[i+2]=='4'){
            mult++;
        }
    }
    if(other>0){
        cout<<"NO\n";
        return 0;
    }
    else if(mult>0){
        cout<<"NO\n";
        return 0;
    }
    else{
        cout<<"YES\n";
        return 0;
    }
}