#include<stdio.h>
int main()
{
    long long int X,sum=0,i,p=0,w=0,j=1;
    scanf("%lld",&X);
    for(i=1;i<3761;i++)
    {
        sum=100+i;
        if(sum%100==0 && X>=200)
        {
            p=i;
            p=p+i;
            if(X==sum)
            {
                printf("%lld\n",p);
                return 0;
            }
            w=sum;
            w=w/100;
            i=w;

        }
        else if(X<200 && sum==X)
        {
            printf("%lld\n",i);
            return 0;
        }
    }
}
