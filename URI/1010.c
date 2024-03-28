#include<stdio.h>
int main()
{
    int a,b;
    float c;
    int d,e;
    float f;
    float w;
    scanf("%d%d%f%d%d%f",&a,&b,&c,&d,&e,&f);
    w=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %0.2f\n",w);
    return 0;
}
