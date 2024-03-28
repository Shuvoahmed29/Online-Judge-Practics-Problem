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
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("This number is a Prime number.\n");
        }
        else
        {
            printf("This number is NOT a prime number.\n");
        }
    }

}
