#include<stdio.h>
int main()
{
    int row,col,space,n;
    printf("Enter any integer number = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");

    }
    /*for(row=n; row>=1; row--)
    {
        for(col=2; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }*/
}


