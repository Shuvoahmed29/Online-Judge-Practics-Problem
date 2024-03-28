#include<stdio.h>
int main()
{
    int k,w;
    long long int n;
    int q,sum=0,i;
    scanf("%d %lld %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+i;
    }
    q=(k*sum)-n;
    if(q<0)printf("0\n");
    else printf("%d\n",q);
    return 0;
}
