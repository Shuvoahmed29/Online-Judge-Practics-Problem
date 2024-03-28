#include<stdio.h>
int main()
{
    long long int a,b,result;
    while((scanf("%lld %lld",&a,&b)==2))
    {
        if(b>a)
        {
            result=b-a;
            printf("%lld\n",result);
        }
        else
        {
            result=a-b;
            printf("%lld\n",result);
        }

    }

    return 0;
}
