#include<stdio.h>
int main()
{
    int n,i=1,sum=1;
    printf("N=");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i*i;
        i=i+2;
    }
    printf("Ans = %d\n",sum);
}
