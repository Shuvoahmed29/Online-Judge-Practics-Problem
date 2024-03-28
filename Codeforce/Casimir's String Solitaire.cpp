#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int a=0,b=0,c=0;
        sort(str.begin(), str.end());
        for(int i=0; i<str.size();i++){
            if(str[i]=='A')a++;
            else if(str[i]=='B')b++;
            else if(str[i]=='C')c++;
            if(a>=b){
                a=a-b;
                b=0;
            }
            else{
                b=b-a;
                a=0;
            }
            if(b>=c){
                b=b-c;
                c=0;
            }
            else{
                c=c-b;
                b=0;
            }
            
        }
        if(a==0 && b==0 && c==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}