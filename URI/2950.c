#include<stdio.h>
int main()
{
    int a,b,c,n;
    float f;
    scanf("%d%d%d",&a,&b,&c);
    n=b+c;
    f=(float)a/n;
    printf("%0.2f\n",f);
    return 0;
}
