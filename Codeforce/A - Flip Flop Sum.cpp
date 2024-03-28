#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n;  cin >> n;
        vector<int> vec;
        int sum = 0;
        for(int i=0; i<n; ++i){
            int x; cin >> x;
            sum+=x;
            vec.push_back(x);
        }
        int p=0;
        for(int i=0; i<n-1;i++){
            if(vec[i]==-1 && vec[i+1]==-1 && p==0){
                sum+=4;
                p=1;
            }
        }
        for(int i=0; i<n-1;i++){
            if((vec[i]==-1 && vec[i+1]==1 && p==0) || (vec[i]==1 && vec[i+1]==-1 && p==0)){
                p=1;
            }
        }
        for(int i=0; i<n-1;i++){
            if(vec[i]==1 && vec[i+1]==1 && p==0){
                sum-=4;
                p=1;
            }
        }
        cout << sum << endl;
    }
}