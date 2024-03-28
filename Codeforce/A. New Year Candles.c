#include<stdio.h>
int main()
{
    int a,b,sum=0,c;
    scanf("%d%d",&a,&b);
    sum=a;
    while(a>=b)
    {
        c=a/b;
        a=c+(a%b);
        sum+=c;
    }
    printf("%d\n",sum);
    return 0;
}
