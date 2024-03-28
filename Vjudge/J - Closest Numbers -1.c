#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int A[n],C[n],copy,min;
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            C[i]=A[i]-A[j];
        }
    }

    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; i<n; i++)
        {
            if(C[j]<C[min])
            {
                min=j;
            }
        }
        copy=C[i];
        C[i]=C[min];
        C[min]=copy;
    }
     for(i=0;i<n;i++)
    {
        printf("%d\n",C[i]);
    }
    return 0;
}
