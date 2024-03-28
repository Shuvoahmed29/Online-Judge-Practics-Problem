#include<stdio.h>
int main()
{
    int n,row,col,space,i=0,k;
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            if(col=1 && col==(2*n+2))
                printf("A");
            /*if(row==n)
            {
              if(col=1 && col==(2*n-1))
                printf("A");

            }
            else
            {*/
                for(col=1; col<=row; col++)
                {
                     printf("%c",col+64);
                    i++;
                }
                k=n-i;
                for(space=1; space<=k; space++)
                    printf(" ");
                i=0;
                k=0;
                for(space=2; space<=n-row; space++)
                {
                    printf(" ");
                }
                for(col=1; col<=row; col++)
                {
                     printf("%c",col+64);
                }

            }

            printf("\n");
        }


}
