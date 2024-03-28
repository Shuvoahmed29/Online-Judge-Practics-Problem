#include<stdio.h>
int main()
{
    int N,n,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d\n",0);
        }
        else
        {
            printf("%d\n",1);
        }
    }
    return 0;
}
