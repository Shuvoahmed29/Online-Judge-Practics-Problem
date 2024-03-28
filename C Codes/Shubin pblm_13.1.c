#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,n;
    printf("Enter Any Integer Number : ");
    scanf("%d",&n);
     for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("c");
        }
        printf("\n");
    }

    for(row=2;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("c");
        }
        printf("\n");
    }
    getch();
}
