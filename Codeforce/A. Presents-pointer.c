#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int i,*ptr,*p;
    ptr=(int*)malloc(n*sizeof(int));
    p=ptr;
    for(i=1; i<=n; i++)
    {
        scanf("%d",p);
        p++;
    }
    p=ptr;
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(*p==j)
            {
                printf("%d ",i+1);
            }
            p++;
        }
    }
    return 0;
}

