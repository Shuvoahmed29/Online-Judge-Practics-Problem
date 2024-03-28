#include<stdio.h>
int main()
{
    int N,p;
    scanf("%d",&N);
    p=N;
    int sum=0,r;
    while (N != 0)
    {
        r = N % 10;
        sum=sum+r;
        N /= 10;
    }
    if(p%sum==0)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}
