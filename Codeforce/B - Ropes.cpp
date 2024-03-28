#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int>vec;
bool ok(double length){
    int cunt = 0;
    for(int i=0;i<n;i++){
        cunt+=floor(vec[i]/length);
        // if(cunt>=k){
        //     return true;
        // }
    }
    // return false;
    return cunt>=k;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        int x; cin >> x;
        vec.push_back(x);
    }
    double l=0,r=1e7+9,ans = 0;
    while(r-l > 1e-7){
        double mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            l = mid;
        }
        else{
            r=mid;
        }
    }
    cout <<fixed << setprecision(10)<< ans << endl;
}