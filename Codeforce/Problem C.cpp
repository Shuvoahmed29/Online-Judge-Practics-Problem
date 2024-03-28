#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    if(A<C&&B<D&&C<B)
    {
        cout<<B-C<<endl;
    }
    else if(C<A&&D<B&&A<D)
    {
        cout<<D-A<<endl;
    }

    else if(A<C&&D<B)
    {
        cout<<D-C<<endl;
    }
    else if(C<A&&B<D)
    {
        cout<<B-A<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;

}

