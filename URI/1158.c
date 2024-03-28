#include<stdio.h>
int main()
{
    int n,x,y,i,sum=0,j=0,k;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2!=0)
        {
            for(k=1; k<=y; k++)
            {
                sum=sum+x+j;
                j=j+2;
            }
            printf("%d\n",sum);
            sum=0;
            j=0;
        }

        else if(x%2==0)
        {
            for(k=1; k<=y; k++)
            {
                sum=sum+x+1+j;
                j=j+2;
            }
            printf("%d\n",sum);
            sum=0;
            j=0;
        }







    }
    return 0;
}
