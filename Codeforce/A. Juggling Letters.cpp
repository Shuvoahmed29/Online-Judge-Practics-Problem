#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str,s;
        for(int i=0;i<n;i++){
            cin>>str;
            s=s+str;
        }
        sort(s.begin(),s.end());
        int arr[1000],p=0;
        for(int i=0;i<s.size();i++){
            int d=count(s.begin(),s.end(),s[i]);
            if(d%n!=0){
                cout<<"NO\n";
                p=1;
                break;
            }
        }
        if(p==0){
            cout<<"YES\n";
        }
    }
    return 0;
}