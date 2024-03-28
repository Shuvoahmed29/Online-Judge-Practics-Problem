#include<stdio.h>
int main()
{
    int i,j,row1,col1,row2,col2,k,sum=0;
    int A[10][10];
     int B[10][10];
     int result[10][10];
     printf("Enter rows & cols number for first martrix:  ");
     scanf("%d %d",&row1,&col1);
  printf("Enter rows & cols number for second martrix:  ");
     scanf("%d %d",&row2,&col2);
     while(col1!=row2)
     {
         printf("Error!!!! col1 & row2 need equal.\n\n");
             printf("Enter rows & cols number for first martrix: ");
     scanf("%d %d",&row1,&col1);
  printf("Enter rows & cols number for second martrix:  ");
     scanf("%d %d",&row2,&col2);
     }


      for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }



       for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


         for(i=0;i<row1;i++)
    {

        for(j=0;j<col2;j++)
        {

            for(k=0;k<col1;k++)
                {
           sum=sum+A[i][k]*B[k][j];

            }
                result[i][j]=sum;
        sum=0;

        }
    }


    printf("A= ");
    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col1;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("B= ");
    for(i=0;i<row2;i++)
    {
        printf("\t");
        for(j=0;j<col2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }






    printf("\nResult= \n");
    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col2;j++)

            printf("%d ",result[i][j]);

        printf("\n");
    }
    getch();
 }
