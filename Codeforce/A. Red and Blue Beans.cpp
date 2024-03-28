#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int r,b,d,m,p;
        cin>>r>>b>>d;
        p=fabs(r-b);
        if(p==d || p==0 || b==d)
        {
            cout<<"YES"<<endl;
        }
        else if(b<d)
        {
            cout<<"NO"<<endl;//1 2 3
        }
        else if(b>d && d!=0)
        {
            m=b/d;
            if(m==r)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
