#include<iostream>
using namespace std;
#include<stdio.h>
#include <cstdlib>
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int c,d,x,p,i,j,m,n;
        long long int sum=0,k;
        cin>>c>>d>>x;
        //p=c+d+(x/2);
        p=x/2;
        for(i=1; i<p; i++)
        {
            for(j=1; j<p; j++)
            {
                if(i>j)
                {
                    m=c*i;
                    n=d*j;
                    k=m-n;
                    k = abs(k);
                    if(k==x)
                    {
                        sum++;
                        printf("(%d,%d)\n",i,j);
                    }
                }
                else
                {
                    m=c*j;
                    n=d*i;
                    k=m-n;
                    k = abs(k);
                    if(k==x)
                    {
                        sum++;
                        printf("(%d,%d)\n",i,j);
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
