#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 2e9;
int n,x,y;
bool ok(int t){
    if(x>y) swap(x,y);
    ll p=0;
    if(x <= t){
        p=1;
        t-=x;
        p += floor(t/x);
        p += floor(t/y);
    }
    return p>=n;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x >> y;
    int l=1,r=MAX,time=0;
    while(l<=r){
        int mid = l+(r-l)/2;
        // cout << mid << endl;
        if(ok(mid)){
            time = mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout << time << endl;
}