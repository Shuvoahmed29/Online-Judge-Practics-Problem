#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p=0;
    cin>>t;
    vector<string>vec;
    string s;
    while(t--){
        cin>>s;
        if((s[0]=='O'&&s[1]=='O')&&p==0){
            p=1;
            s[0]='+';
            s[1]='+';
        }
        if((s[3]=='O'&&s[4]=='O')&&p==0){
            p=1;
            s[3]='+';
            s[4]='+';
        }
        vec.push_back(s);
    }
    if(p==1){
        cout<<"YES\n";
        for(string s:vec){
        cout<<s<<"\n";
    }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}