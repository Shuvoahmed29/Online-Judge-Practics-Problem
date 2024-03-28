#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter any Integer number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    k++;
                }
            }
        }
        if(k==2)
        {
            printf("%d ",i);
        }
        k=0;
    }
}
