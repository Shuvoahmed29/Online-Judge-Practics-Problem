#include<stdio.h>
int main()
{
    int n[20],i,j;
    for(i=0;i<20;i++)
    {
        scanf("%d",&n[i]);
    }
    i=19;
    for(j=0;j<20;j++)
    {
        printf("N[%d] = %d\n",j,n[i]);
        i--;
    }
    return 0;
}
