#include<stdio.h>
#include<conio.h>
int main()
{
    int col,row,n;
    printf("Enter any Integer Number: ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
        {
            printf("C");
        }
        printf("\n");
    }
    for(row=2; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
        {
            printf("C");
        }
        printf("\n");
    }
}
