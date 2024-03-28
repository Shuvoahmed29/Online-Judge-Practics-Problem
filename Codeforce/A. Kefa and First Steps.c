#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int A[n],max=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&A[i]);
    }
    max=A[1];
    for(i=2;i<=n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    printf("%d\n",i);
}
