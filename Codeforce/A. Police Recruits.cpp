#include<iostream>
using namespace std;
int main()
{
    long long int n,i,p=0,c=0,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m>0)
        {
            p=p+m;
        }
        else
        {
            if(p<1)
            {
                c++;
            }
            else
            {
                p--;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
