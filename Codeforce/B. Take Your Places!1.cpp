#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0;
        cin>>n;
        int arr[n],sub,k=0;
        string str;
        string A;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
                str[i]='0';
            }
            else{
                odd++;
                str[i]='1';
            }
        }
        sub=abs(even-odd);
        if(n==1){
            cout<<"0";
        }
        else if(sub>1){
            cout<<"-1"<<endl;
        }
        else{
            if(even>=odd){
                for(int i=0;i<str.size();i++){
                    if(i%2==0){
                        A[i]='0';
                    }
                    else{
                        A[i]='1';
                    }
                }
            }
            else{
                for(int i=0;i<str.size();i++){
                if(i%2!=0){
                    A[i]='1';
                }
                else{
                    A[i]='0';
                }
                }
            }
            for(int i=0;i<str.size();i++){
                if(A[i]==str[i]){
                    continue;
                }
                else{
                    for(int j=0;j<str.size();j++){
                        if(str[j]==A[i]){
                            k=k+abs(j-i);
                            break;
                        }
                    }
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
