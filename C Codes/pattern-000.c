#include<stdio.h>
#include<conio.h>
int main()
{
    int n,row,col,space;
    printf("Enter row number = ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=(n-row);space++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col=col+2)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(space=1;space<=(n-row);space++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col=col+2)
        {
            printf("*");
        }
        printf("\n");
    }
}

