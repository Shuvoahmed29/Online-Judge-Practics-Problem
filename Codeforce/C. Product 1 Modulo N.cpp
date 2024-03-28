#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    long long int n,i,p=0,k=1,l=0,j;
    cin>>n;
    long long int a[n];
    a[0]=1;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(i%j==0)
            {
                p++;
            }
        }
        if(p==2)
        {
            a[k]=i;
            k++;
            l++;
        }
        p=0;
    }
    cout<<l+1<<endl;
    for(i=0;i<=l;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
