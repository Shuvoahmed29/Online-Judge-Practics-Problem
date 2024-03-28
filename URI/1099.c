#include<stdio.h>
int main()
{
    int x,y,n,sum=0,N,i;
    scanf("%d",&N);
    for(i=1; i<=N;)
    {
        scanf("%d%d",&x,&y);

        if(x==y)
        {
            sum=0;
            printf("%d\n",sum);

        }
        if(x-y==1 || y-x==1)
        {
            sum=0;
            printf("%d\n",sum);

        }
        else if(x>y)
        {
            for(n=y+1; n<x; n++)
            {

                if(n%2!=0)
                {
                    sum=sum+n;
                }

            }
            printf("%d\n",sum);
        }
        else if(y>x)
        {
            for(n=x+1; n<y; n++)
            {

                if(n%2!=0)
                {
                    sum=sum+n;
                }

            }
            printf("%d\n",sum);
        }
        i++;
        sum=0;
    }
}








