#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)==2){
        long long ans=abs(n-m);
        cout<<ans<<endl;
    }
    return 0;
}