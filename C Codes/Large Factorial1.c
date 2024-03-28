#include<stdio.h>
int main()
{
    int a[1000],c,p,n,i,k=0;
    a[0]=1;
    c=0;
    printf("Enter the value of N = ");
    scanf("%d",&n);
    for(;n>=2;n--)
    {
        p=0;
        for(i=0;i<=c;i++)
        {
            p=(a[i]*n)+p;
            a[i]=p%10;
            p=p/10;
        }
        while(p>0)
        {
            a[++c]=p%10;
            p=p/10;
        }
    }
    for(i=c;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    for(i=c;i>=0;i--)
    {
       k++;
    }
    printf("\nThe element = %d\n",k);
    return 0;
}
