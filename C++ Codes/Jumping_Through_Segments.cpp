#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
    code();
    int tt; cin>>tt;
    while(tt--){
        int n;  cin>>n;
        int l[n],r[n];
        int mx = INT_MIN;
        for(int i = 0; i<n; i++)  {
            cin>> l[i] >> r[i];
            mx = max(mx,r[i]);
        }
        int low = 0,high = mx;
        int k = 0;
        while(low <= high){
            int mid = (low+high)/2;
            int left = 0,right = 0;
            bool ok = true;
            for(int i = 0; i<n; i++){
                left = max(l[i],left-mid);
                right = min(r[i], right+mid);
                if(left>right){
                    ok = false;
                    break;
                }
            }
            if(ok) {
                high = mid-1;
                k = mid;
            }
            else low = mid+1;
        }
        cout<< k <<endl;
    }
}