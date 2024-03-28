#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int m,p=0,q=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        int A[m],j;
        for(j=0; j<m; j++)
        {
            scanf("%d",&A[i]);
        }
    }
    for(i=0; i<m; i++)
    {
        p-=A[i];
        if(q==p)
        {
            printf("YES\n");
            break;
        }
        p+=A[i];
        if (q>p)
        {
            printf("NO\n");
            break;
        }
    }
    return 0;
}
