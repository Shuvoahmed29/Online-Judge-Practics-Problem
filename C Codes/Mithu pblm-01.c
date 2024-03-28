#include<stdio.h>
int main()
{
    int row,col,space,n;
    printf("Enter any integer number = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(space=n; space<n-row; space++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
