#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,ok=0,even=0,odd=0;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i%2==0&&a%2==0){
                ok++;
            }
            else if(i%2!=0&&a%2!=0){
                ok++;
            }
            else if(i%2==0&&a%2!=0){
                odd++;
            }
            else if(i%2!=0&&a%2==0){
                even++;
            }
            vec.push_back(a);
        }
        if(ok==n){
            cout<<"0"<<endl;
        }
        else if(even==odd){
            cout<<odd<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}