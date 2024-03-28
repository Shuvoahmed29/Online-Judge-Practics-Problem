#include<stdio.h>
int main()
{
    long long int n,copy,j;
    scanf("%lld",&n);
    long long int A[n],C[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]>A[j])
            {
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            C[j]=A[i]-A[j];
        }
    }
}
