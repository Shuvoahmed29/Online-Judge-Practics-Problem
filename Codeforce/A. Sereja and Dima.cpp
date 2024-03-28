#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,s=0,d=0, c=1;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int fast=0,last=n-1;
    while(fast<=last) {
        if (arr[fast]>=arr[last]){
            if (c%2==1){
                s=s+arr[fast];
                c++;
            } else{
                d=d+arr[fast];
                c++;
            }
            fast++;
        }
        else if (arr[last] > arr[fast]) {
            if (c % 2 == 1) {
                s=s+arr[last];
                c++;
            } else {
                d=d+arr[last];
                c++;
            }
            last--;
        }
    }
    cout << s << "  " << d;
    return 0;
}