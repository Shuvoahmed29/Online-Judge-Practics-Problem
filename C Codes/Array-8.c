#include<stdio.h>
int main()
{
    int i,j,A[3][4];
    printf("Enter the elements of A matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n\n");

    }

     printf("Enter the elements of B matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n\n");

    }
    printf("A=");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
             printf("\t");
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");
    printf("B=");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
             printf("\t");
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
}
