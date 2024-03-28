#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    a=a*300;
    b=b*1500;
    c=c*600;
    d=d*1000;
    e=e*150;
    sum=a+b+c+d+e+225;
    printf("%d\n",sum);
    return 0;
}
