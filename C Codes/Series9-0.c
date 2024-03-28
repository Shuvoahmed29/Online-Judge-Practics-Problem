#include<stdio.h>
int main()
{
    int n,i=1,sum=1;
    printf("Enter N=");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i*i;
        i++;
    }
    printf("Ans is : %d\n",sum);
}
