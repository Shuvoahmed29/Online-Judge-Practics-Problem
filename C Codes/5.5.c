#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the value of n:  ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}
