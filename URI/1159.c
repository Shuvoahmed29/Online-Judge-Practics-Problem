#include<stdio.h>
int main()
{
    {
        int n,i,j=0,sum=0;
        while(1)
        {
            scanf("%d",&n);
            if(n==0)
            {
                break;
            }
            else
            {
                if(n%2==0)
                {
                    for(i=1; i<=5; i++)
                    {
                        sum=sum+n+j;
                        j=j+2;
                    }
                    printf("%d\n",sum);
                    sum=0;
                    j=0;
                }
                else if(n%2!=0)
                {
                    for(i=1; i<=5; i++)
                    {
                        sum=sum+n+1+j;
                        j=j+2;
                    }
                    printf("%d\n",sum);
                    sum=0;
                    j=0;
                }
            }
        }
        return 0;
    }
}
