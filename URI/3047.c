#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d%d",&a,&b,&c);
    d=a-(b+c);
    if(d>b && d>c)
    {
        printf("%d\n",d);
    }
    else if(b>c)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",c);
    }
    return 0;

}
