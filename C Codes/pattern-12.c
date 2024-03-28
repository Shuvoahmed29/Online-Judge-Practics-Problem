#include<stdio.h>
int main()
{
    int row,col,n,space;
    printf("Enter the rows number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
            {printf(" ");}
        for(col=1;col<=row;col++)
            {printf("%d",col);}

            for(col=row-1;col>=1;col--)
                printf("%d",col);
            printf("\n");
    }
     for(row=n-1;row>=1;row--)
    {
        for(space=1;space<=n-row;space++)
            {printf(" ");}
        for(col=1;col<=row;col++)
            {printf("%d",col);}

            for(col=row-1;col>=1;col--)
                printf("%d",col);
            printf("\n");
    }

    return 0;
}
