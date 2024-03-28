#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d%d",&a,&b);
        sum=(a+k)-b;
        if(sum<0)
            k=0;
        else
            k=sum;
    }
    printf("%d\n",sum);
    return 0;
}
