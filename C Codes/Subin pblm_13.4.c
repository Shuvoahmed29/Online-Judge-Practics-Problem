#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,row,col;
    printf("How many number = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("c");
           j=(2*n)-2;
            {
                printf(" ");
                j=j-2;
            }
            printf("c");
        }
        printf("\n");
    }
    /*for(row=1;row<=n;row++)
    {
       for(i=1;i<=n-row;i++)
           printf(" ");
       for(col=1;col<=row;col++)
       {
           printf("c");
       }
       printf("\n");
    }*/
}
