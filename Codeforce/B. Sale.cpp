#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,sum=0,p=0;
    cin>>n>>m;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<m;i++){
        if(vec[i]<0){
            sum+=vec[i];
        }
    }
    cout<<abs(sum)<<endl;
}