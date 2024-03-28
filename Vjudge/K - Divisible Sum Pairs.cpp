#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;    cin >> n >> k;
    int arr[n],ans=0;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            int sum = arr[i]+arr[j];
            if(sum%k == 0) ans++;
        }
    }
    cout << ans << endl;
}