#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,one=0,two=0,p;
        cin>>n;
        p=n;
        string str;
        string A;
        cin>>str;
        A=str;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                one++;
            }
            else{
                two++;
            }
        }
        if(two==1 && one>=two){
            cout<<"NO\n";
        }


        else if(two==0){
              cout<<"YES\n";
        while(p--){
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    if(str[j]=='1'){
                        str[j]='=';
                    }
                }

                 for(int k=i+1;k<n;k++){
                    if(str[k]=='1'){
                        str[k]='=';
                    }
                }
            }
            str[n-p-1]='X';
            cout<<str<<endl;
            str=A;
        }
        }


        else{
            cout<<"YES\n";
        while(p--){
            int w=0,l=0;
            char ch='+';
            for(int i=0;i<n;i++){
                cout<<str[i]<<" ";
                if(str[i]=='1'){
                    ch='-';
                }
                for(int j=0;j<i;j++){
                    if(str[j]=='1'){
                        str[j]='-';
                    }
                    else if(str[j]=='2'){
                        str[j]=ch;
                    }
                }
                l=0;
                for(int k=i+1;k<n;k++){
                    if(str[k]=='1'){
                        str[k]='-';
                    }
                    else if(str[k]=='2'){
                        str[k]=ch;
                    }
                }
            }
            str[n-p-1]='X';
            cout<<str<<endl;
            str=A;
        }
        }
    }
    return 0;
}