#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,one=0,zero=0,d;
    cin>>n;
    string str;
    vector<string>vec;
    cin>>str;
    vec.push_back(str);
    for(int i=0;i<n;i++){
        if(vec[0][i]=='1'){
            one++;
        }
        else if(vec[0][i]=='0'){
            zero++;
        }
    }
    d=min(one,zero);
    d=n-2*d;
    cout<<d<<"\n";
    return 0;
}