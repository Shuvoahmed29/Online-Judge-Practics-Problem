#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cunt=0;
    cin>>n;
    string str;
    vector<string>vec;
    cin>>str;
    vec.push_back(str);
    for(int i=0;i<n;i++){
        if(vec[0][i]=='x'&&vec[0][i+1]=='x'&&vec[0][i+2]=='x'){
            cunt++;
        }
    }
    cout<<cunt<<endl;
    return 0;
}