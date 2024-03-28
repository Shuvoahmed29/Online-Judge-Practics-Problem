#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  
    cin >> n;
    int arr[n];
    int posi = 0, neg = 0, zero = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>0) posi++;
        else if(arr[i]<0) neg++;
        else zero++;
    }
    printf("%0.6lf\n",(double)posi/n);
    printf("%0.6lf\n",(double)neg/n);
    printf("%0.6lf\n",(double)zero/n);
}