#include<stdio.h>
int main()
{
    long long int n,i,k=0,p=0;
    scanf("%lld",&n);
    long long int A[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&A[i]);
    }

    long long int m,j,min;
    scanf("%lld",&m);

    long long int B[n],C[m-n];
    for(j=0;j<m;j++)
    {
        scanf("%lld",&B[j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(A[i]==B[j])
            {
                B[j]=NULL;
                break;
            }
        }
    }
    i=0;

    for(j=0;j<m;j++)
    {
        if(B[j]!=NULL)
        {
            printf("%lld\n",B[j]);
        }
    }
    /*min=C[0];

    for(j=1;j<i;j++)
    {
        if(min>C[j])
           {
               min=C[j];

           }
    }*/

    /*for(j=0;j<(m-n);j++)
    {
        printf("%lld\n",C[j]);
    }*/
    return 0;
}
