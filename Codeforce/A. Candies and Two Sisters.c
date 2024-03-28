#include<stdio.h>
int main()
{
    int n,t,i,k,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        k=n-1;
        p=k/2;
        printf("%d\n",p);
    }
    return 0;
}
