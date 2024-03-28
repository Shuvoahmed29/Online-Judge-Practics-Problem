#include<stdio.h>
int main()
{
    int row,col2=0,n,space,col1;
    printf("Enter any integer number : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        {
            printf(" ");
        }
        for(;col2<row;col2++)
        {
            printf("%d",col2);
        }
        col2=col2+1;
        for(col1=row-2;col1>=0;col1--)
        {
            printf("%d",col1);
        }
        printf("\n");
    }
}



