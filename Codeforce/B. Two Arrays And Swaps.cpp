#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0,cunt=0;
        cin>>n>>k;
        int a,b;
        vector<int>vec1;
        vector<int>vec2;
        for(int i=0;i<n;i++){
            cin>>a;
            vec1.push_back(a);
        }
        for(int i=0;i<n;i++){
            cin>>b;
            vec2.push_back(b);
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                if((vec1[i]<vec2[j])&&k>0){
                    swap(vec1[i],vec2[j]);
                    k--;
                }
            }
        }
        for(int i=0;i<n;i++)sum=sum+vec1[i];
        cout<<sum<<"\n";
    }
    return 0;
}