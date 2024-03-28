#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0; i<n; i++)
    {
        int p,j;
        scanf("%d",&p);
        int A[p];
        for(j=0; j<p; j++)
        {
            scanf("%d",&A[j]);
        }
        for(j=0; j<p; j++)
        {
            printf("%d",A[j]);
        }
    }
    return 0;
}
