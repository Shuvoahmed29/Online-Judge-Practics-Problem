#include<stdio.h>
int main()
{
    int i,j,r,c;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the number of rows & cols: ");
    scanf("%d %d",&r,&c);
    //Enter A matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //Enter B matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //printing A matrix
    printf("A=");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t");
            printf("%d",A[i][j]);
        }
       printf("\n");
    }
     //printing B matrix
    printf("\nB=");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t");
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    //Addition A & B matrix
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          C[i][j]=A[i][j] + B[i][j];
        }

    }
     //printing C matrix
     printf("\nA+B=");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t");
            printf("%d",C[i][j]);
        }
        printf("\n");
    }

}
