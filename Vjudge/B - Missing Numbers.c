#include<stdio.h>
int main()
{
    int n,p=0,j,i;
    scanf("%d",&n);
    int A[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    int m;
    scanf("%d",&m);
    int B[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(A[i]==B[j])
            {
                p=p+1;
            }
        }
        printf("%d\n",p);
        p=0;
    }
}
