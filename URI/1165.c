#include<stdio.h>
int main()
{
    int n,i,x,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==2)
        {
            printf("%d eh primo\n",2);
        }
        else
        {
            for(j=1;j<=x;j++)
            {
                if(x%j==0)
                {
                    k++;
                }
            }
            if(k==2)
            {
               printf("%d eh primo\n",x);
            }
            else if(k!=2)
            {
                printf("%d nao eh primo\n",x);
            }
            k=0;
        }
    }
    return 0;
}
