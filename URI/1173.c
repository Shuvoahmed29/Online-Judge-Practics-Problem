#include<stdio.h>
int main()
{
    int N[10],v,i;
    scanf("%d",&v);

    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,v);
        v=2*v;

    }
    return 0;
}
