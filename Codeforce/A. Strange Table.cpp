#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int m,n,x,i=0,p,y,w,j,sum=1;
        cin>>n>>m>>x;
        /*p=m*n;
        long long int k1,s1,k2,s2,a1;
        k1=(x % n);
        s1=(x % m);
        k2=(x/n);
        s2=(x/m);
        if(x-(k2*n)>1)
        {
            k1=(x/n) +1;
        }
        else
        {
            k1=(x/n);
        }
        if(x-(m*s2)>1)
        {
            s1=(x/m) +1;
        }
        else
        {
            s1=(x/m);
        }*/
        for(j=1; j<=m; j++)
        {
            if(sum==x)
            {
                break;
            }
            sum=sum+n;
            i++;
        }
        cout<<i+1 <<" "<<i/2;
        //a1=k1+((s1-1)*m);
        //cout<<a1<<endl;
    }
    return 0;
}
