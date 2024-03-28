#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c<=n)
    {
        printf("Farei hoje!\n");
    }
    else
    {
        printf("Deixa para amanha!\n");
    }
    return 0;
}
