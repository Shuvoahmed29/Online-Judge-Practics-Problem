#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    string str;
    cin>>str;
    string vec={"qwertyuiop{}asdfghjkl;'zxcvbnm,./"};
    if(c=='R'){
        for(int i=0;i<str.size();i++){
            for(int j=0;j<vec.size();j++){
                if(str[i]==vec[j]){
                    cout<<vec[j-1];
                    break;
                }
            }
        }
    }
    else if(c=='L'){
        for(int i=0;i<str.size();i++){
            for(int j=0;j<vec.size();j++){
                if(str[i]==vec[j]){
                    cout<<vec[j+1];
                    break;
                }
            }
        }
    }
    return 0;
}