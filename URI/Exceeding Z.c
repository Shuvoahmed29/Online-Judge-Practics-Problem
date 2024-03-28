#include<stdio.h>
int main()
{
    int X,Z,sum=0,i;
    scanf("%d%d",&X,&Z);
    while(Z<=X)
    {
        scanf("%d",&Z);
    }
    while(Z>X)
    {
        for(i=X+1;Z>X;i++)
        {
            X=X+i;
            sum++;
        }
    }
    printf("%d\n",sum+1);
    return 0;
}
