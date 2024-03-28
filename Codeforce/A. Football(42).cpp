#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p=0;
    cin>>t;
    vector<string>vec;
    string str;
    while(t--){
        cin>>str;
        vec.push_back(str);
    }
    int len=vec.size();
    int arr[len],maxi=0;
    for(int i=0;i<len;i++){
       arr[i]=count(vec.begin(), vec.end(),vec[i]);
       if(maxi<arr[i]){
           maxi=arr[i];
           p=i;
       }
    }
    cout<<vec[p]<<endl;
    return 0;
}