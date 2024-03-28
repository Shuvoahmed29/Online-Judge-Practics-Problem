#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,row,col;
    printf("Enter rows & cols number: ");
    scanf("%d %d",&row,&col);
    //Enter A matrix.
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
            }
            printf("\n");
    }
    //Enter B matrix.
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
            }
            printf("\n");
    }
    //printing A matrix.
    printf("\nA=");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
            printf("\t");
            printf("%d",A[i][j]);
            }
            printf("\n");
    }
    //printing B matrix.
    printf("\nB=");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
            printf("\t");
            printf("%d",B[i][j]);
            }
            printf("\n");
    }
    //Addition A  & B matrix.
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
                C[i][j]=A[i][j]+B[i][j];

            }

    }
    //printing C matrix.
    printf("\nA+B=");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
            printf("\t");
            printf("%d",C[i][j]);
            }
            printf("\n");
    }
}
