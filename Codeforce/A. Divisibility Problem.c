#include<stdio.h>
int main()
{
    long long int a,b,i,j,k,n,d=0;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a%b==0)
            printf("0\n");
        else
        {
            for(j=1; j<=b; i++)
            {
                d=a+j;
                if(d%b==0)
                {
                    printf("%lld\n",j);
                    break;
                }
            }
        }
    }
    return 0;
}
