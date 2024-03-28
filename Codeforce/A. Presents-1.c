#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int A[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=1; j<=n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(A[i]==j)
            {
                printf("%d ",i+1);
            }
        }
    }
}
