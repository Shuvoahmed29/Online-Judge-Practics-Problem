#include<stdio.h>
int main()
{
    int t,n,i,sum,p;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        sum=n*567;
        sum=sum/9;
        sum=sum+7492;
        sum=sum*235;
        sum=sum/47;
        sum=sum-498;
        if(sum<0)
        {
            sum=sum*(-1);
        }
        p=sum/10;
        p=p%10;
        printf("%d\n",p);
    }
    return 0;
}

