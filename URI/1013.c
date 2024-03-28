#include<stdio.h>
int main()
{
    int a,b,c,d,f;
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    f=(c+d+abs(c-d))/2;
    printf("%d eh o maior\n",f);
    return 0;
}
