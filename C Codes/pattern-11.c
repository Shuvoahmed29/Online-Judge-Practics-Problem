#include<stdio.h>
int main()
{
    int col,row,n,no=0;
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",++no);
        }
        printf("\n");
    }
    return 0;
}
