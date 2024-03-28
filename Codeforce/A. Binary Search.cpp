#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;    cin >> n >> k;
    vector<int>vec;
    for(int i = 0; i<n;i++){
        int x;  cin >> x;
        vec.push_back(x);
    }
    for(int i = 0;i<k;i++){
        int x;  cin >> x;
        int low=0,high=n-1;
        bool ok=false;
        while(low<=high){
            int mid=(low+high)/2;
            if(vec[mid]==x){
                cout << "YES\n";
                ok=true;
                break;
            }
            if(x>=vec[mid]){
                low=mid+1;
            }
            else if(x<=vec[mid]){
                high=mid-1;
            }
        }
        if(ok==false){
            cout << "NO\n";
        }
    }
}