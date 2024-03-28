#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        p=n/10;
        k=n%10 + (n/100)*10 ;
        if(p<k)
            cout<<k<<endl;
        else
            cout<<p<<endl;
    }
    return 0;
}
