#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_L = 1e14;
bool ok(int mid,int w,int h,int n){
    int a= mid/w;
    int b= mid/h;
    if(b==0) return false;
    return a>=(double)n/b;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int w,h,n;  cin >> w >> h >> n;
    int l=1,r=MAX_L-1;
    int ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(ok(mid,w,h,n)){
            ans = mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout << ans << endl;
}