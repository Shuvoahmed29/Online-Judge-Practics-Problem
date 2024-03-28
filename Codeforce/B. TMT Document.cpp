#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,t=0,m=0,i,t1=0,m1=0,p=0;
        cin>>n;
        string a;
        cin>>a;
        if(a[0]=='M' || a[n-1]=='M')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]=='T')
                {
                    t++;
                }
                else
                {
                    m++;
                }
            }
            if(t!=2*m)
            {
                cout<<"NO"<<endl;
                p=1;
            }
            else if(p==0)
            {
                for(i=0; i<n; i++)
                {
                    if(a[i]=='T')
                    {
                        t1++;
                    }
                    else
                    {
                        m1++;
                    }
                    if(m1>t1)
                    {
                        cout<<"NO"<<endl;
                        p=1;
                        break;
                    }
                }
                if(p==0)
                {
                    m1=0;
                    t1=0;
                    for(i=n-1; i>=0; i--)
                    {
                        if(a[i]=='T')
                        {
                            t1++;
                        }
                        else
                        {
                            m1++;
                        }
                        if(m1>t1)
                        {
                            cout<<"NO"<<endl;
                            p=1;
                            break;
                        }
                    }
                }
            }
            if(p==0)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
