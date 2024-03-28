#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    int arr[n][n],sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            if(i==j) sum1+=arr[i][j];
        }
    }
    int k = 0;
    for(int i=n-1;i>=0;i--){
        sum2+=arr[i][k];
        k++;
    }
    // cout << sum1 << "  " << sum2 << endl;
    cout << abs(sum1-sum2) << endl;
}