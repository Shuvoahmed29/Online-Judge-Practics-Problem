#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    scanf("%d%d",&m,&n);
    if(m<=0 || n<=0)
    {
        printf("\n");
    }
    else
    {
        if(m>n)
        {
            for(i=n; i<=m; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
        else if(n>m)
        {
            for(i=m; i<=n; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
