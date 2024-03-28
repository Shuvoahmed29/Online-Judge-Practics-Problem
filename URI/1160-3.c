#include<stdio.h>
int main()
{
    long long int i=0,n=0,s,j,a,b;
    double ga,gb;
    scanf("%lld",&n);
    for(j=1; j<=n; j++)
    {
        scanf("%lld %lld %lf %lf",&a,&b,&ga,&gb);
        while(b>=a)
        {
            a+=a*ga/100;
            b+=b*gb/100;
            i++;
        }
        if(i>100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%lld anos.\n",i);
        }
        i=0;
    }
    return 0;
}
