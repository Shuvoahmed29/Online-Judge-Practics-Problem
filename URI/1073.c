#include<stdio.h>
int main()
{
    int N,sum,i;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            sum=pow(i,2);
            printf("%d^2 = %d\n",i,sum);
        }
    }
    return 0;
}
