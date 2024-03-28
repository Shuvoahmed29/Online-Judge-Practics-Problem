#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,p,k,sum=0;
        scanf("%lld%lld",&a,&b);
        double c,d;
        scanf("%lf%lf",&c,&d);
        while(a<=b)
        {
            a=a+((a*c)/100);
            b=b+((b*d)/100);
            sum=sum+1;
            if(sum>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(sum<=100)
        {
            printf("%lld anos.\n",sum);
        }
    }
    return 0;
}
