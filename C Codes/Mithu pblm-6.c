#include<stdio.h>
int main()
{
    int n,row,col,space,i,j;
    printf("Enter any integer : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        /*for(space=1;soace<=n-row;space++)
        {
            printf(" ");
        }*/
        for(col=1;col<=row;col++)
        {
            if(col==1)
            {
                for(i=1;i<=2*n;i=i+2)
                    printf("%d\n",i);
            }
            if(col==2)
            {
                for(j=2;j<=2*n;j=j+2)
                    printf("%d\n",j);
            }
        }
        printf("\n");
    }
}
