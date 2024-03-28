#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter N= ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
            printf("%d ",n);
            //else if(row==2 || col==2 || row==n-1 || col==n-1)
            //printf("%d ",n-1);
            //else if(row==3 || row==n-3 || col==3 || col==n-3)
            //printf("%d ",n-2);
            //else if(row==4 || row==n-4 || col==4 || col==n-4)
            //printf("%d ",n-3);

              else
                    printf(" ");
        }
        printf("\n");
    }
}
