#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='U'){
                str[i]='D';
            }
            else if(str[i]=='D'){
                str[i]='U';
            }
        }
        cout<<str<<endl;
    }
    return 0;
}