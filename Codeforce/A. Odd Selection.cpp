#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a;
    cin>>t;
    while(t--)
    {
        int even = 0,odd = 0,l=0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 1)odd++;
            else even++;
        }
        if(odd==0){
            cout<<"NO\n";
            l=1;
        }
        else{
            for(int i=1;i<=odd;i=i+2){
                if(x<i){
                    break;
                }
                if(x-i<=even){
                    cout<<"YES\n";
                    l=1;
                    break;
                }
            }
        }
        if(l==0){
        cout<<"NO\n";
        }
    }
    return 0;
}