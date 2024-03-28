#include<stdio.h>
int main()
{
    int N[1000],T,i,j;
    scanf("%d",&T);
    for(j=0; j<1000; j++)
    {
        for(i=0; i<T; i++)
        {
            printf("N[%d] = %d\n",j,i);
        }
    }
    return 0;
}
