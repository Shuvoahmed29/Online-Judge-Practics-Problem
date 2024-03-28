#include<stdio.h>
int main()
{
    int row,col,space,n;
    printf("Enter any integer number = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=2*row-1; col++)
        {
            printf("* ");
        }
        printf("\n");
        break;
    }
    for(col=1; col<=row-1; col++)
    {
        printf("* ");
    }
    printf(" ");
    for(col=1; col<=row-1; col++)
    {
        printf("* ");
    }
    printf("\n");
    for(col=1; col<=row-2; col++)
    {
        printf("* ");
    }
    printf("   ");
    for(col=1; col<=row-2; col++)
    {
        printf(" *");
    }
    printf("\n");

    for(col=1; col<=row-3; col++)
    {
        printf("* ");
    }
    printf("   ");
    for(col=1; col<=row-3; col++)
    {
        printf("  *");
    }
    printf("\n");
    for(col=1; col<=row-4; col++)
    {
        printf("* ");
    }
    printf(" ");
    for(col=1; col<=row-4; col++)
    {
        printf("* ");
    }
    printf("\n");


}


