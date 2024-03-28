#include<stdio.h>
int main()
{
    int x,y,i,j,k,n=1,l;
    scanf("%d %d",&x,&y);
    k=y/x;
    l=x;
    for(i=1; i<=k; i++)
    {
        printf("%d",n);
        for(j=n+1; j<=l; j++)
            printf(" %d",j);
        printf("\n");
        n=n+x;
        l=l+x;
    }
    return 0;
}
