#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,a,l=0;
    cin>>k;
    vector<int>vec;
    for(int i=0;i<12;i++){
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=11;i>=-1;i--){
        if(k<=0){
            cout<<l<<"\n";
            return 0;
        } 
        k=k-vec[i];
        l++;
    }
    cout<<-1<<"\n";
    return 0;
}