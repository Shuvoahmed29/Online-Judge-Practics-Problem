#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter rows number: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf(" %c",row+64);
        }
        printf(" \n");
    }
    return 0;
}
