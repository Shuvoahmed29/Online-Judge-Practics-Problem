#include<stdio.h>
int main()
{
    int n,i,k=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("This number is NOT a prime number.\n");
    }
    else
    {
        if(n>=2)
        {
            for(i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    printf("This number is NOT a prime number.\n");
                    exit(0);
                }
            }
            printf("This number is a Prime number.\n");
        }
    }
}

