#include<stdio.h>
int main()
{
    int n,k,d,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d\n",i,k=i*i,d=i*i*i);
        printf("%d %d %d\n",i,k+1,d+1);
    }
    return 0;
}
