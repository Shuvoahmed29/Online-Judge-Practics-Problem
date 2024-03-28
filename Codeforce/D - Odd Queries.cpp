#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,l,r,k,i,j,sum=0,sum1=0,tt,k1,k2,ans;
    cin >> tt; 
    //  prefix_array[0] = array[0]
    // for i = 1 to n:
    //     prefix_array[i] = ar[i] + prefix_array[i - 1]
    while(tt--){
        cin >> n >> q;
        vector<int>vec(n),sum(n),sum1(n);
        for(i=0;i<n;i++) cin >> vec[i];
        sum[0] = vec[0];
        for(i=1;i<n;i++) sum[i] = vec[i] + sum[i-1];

        for(i=0;i<q;i++){
            cin >> l >> r >> k;
            if(l>=2) k1 = sum[r-1] - sum[l-2];
            else k1 = sum[r-1];
            k2 = k*((r-l)+1);
            ans = sum[n-1]+k2-k1;
            // cout << ans << endl;
            if(ans%2 != 0) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
}