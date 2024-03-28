#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int A[m];
    int i,sum=0;
    for(i=1;i<=m;i++)
    {
        scanf("%lld",&A[i]);
        sum=sum+A[i];
    }
    if(sum>n)
    {
        printf("-1\n");
    }
    else if(n>=sum)
    {
        printf("%d\n",(n-sum));
    }
    return 0;
}
