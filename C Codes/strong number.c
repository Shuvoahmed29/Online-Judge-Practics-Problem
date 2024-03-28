#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r,i=0;
    double sum=0.0;
    scanf("%d",&m);
    n=m;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    n=m;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(double)pow(r,i);
        n=n/10;
    }
    if(sum==m)
    {
        printf("Strong");
    }
    else
    {
        printf("Weak");
    }
    return 0;
}
