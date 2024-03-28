#include<stdio.h>
int main()
{
    int row,col,n,space;
    printf("Enter N =  ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(space=1;space<=n-row;space++)
        {

           printf(" ");
        }

        for(col=1;col<=row;col++)
        {

           printf("%d",col);
        }
        printf("\n");
    }
}


