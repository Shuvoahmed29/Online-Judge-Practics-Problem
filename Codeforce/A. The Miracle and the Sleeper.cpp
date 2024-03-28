#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,l,n,r;
        cin>>l>>r;
        a = r/2;
        n = a;
        a++;
        if(a<l)
        {
            a = l;
        }
        cout<<r%a<<endl;
    }

    return 0;
}
