#include<stdio.h>
int main()
{
    int row,col,n,m,no;
    printf("Enter rows number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            no=0;
            m=1;
            if(row%2==0)
            {
                printf(" %d",no);
            }
            else
            {
                printf(" %d",m);
            }
        }
        printf(" \n");
    }
    return 0;
}
