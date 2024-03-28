#include<stdio.h>
int main()
{
    long long int a,d;
    int b,c,e,f;
    scanf("%lld",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=abs(a);
    e=abs(b);
    f=abs(c);
    printf("A = %lld, B = %d, C = %d\n",a,b,c);
    printf("A =       %lld, B =         %d, C =        %d\n",a,b,c);
    printf("A = 000000%lld, B = 00000000%d, C = 0000000%d\n",d,e,f);
    printf("A = %lld      , B = %d        , C = %d       \n",a,b,c);
    return 0;
}
