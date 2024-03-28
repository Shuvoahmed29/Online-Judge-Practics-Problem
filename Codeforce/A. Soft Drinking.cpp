#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >>c>>d >> p >> nl >>np;
    int a,b,c1,ans;
    a=k*l;
    a=a/nl;
    b=c*d;
    c1=p/np;
    ans=min(a,min(b,c1));
    cout<<ans/n<<endl;
    return 0;
}