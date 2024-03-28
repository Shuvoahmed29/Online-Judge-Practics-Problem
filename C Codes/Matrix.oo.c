#include<stdio.h>
int main()
{
   int A[10][10],B[10][10],C[10];
   int row1,col1,row2,col2,i,j;

   printf("\nEnter rows & cols for first matrix: ");
   scanf("%d %d",&row1,&col1);

   printf("\nEnter rows & cols for second matrix: ");
   scanf("%d %d",&row2,&col2);

   while(col1!=row2)
   {
     printf("\nError !!! First matrix col & second matrix row is not equal");

     printf("\nEnter rows & cols for first matrix: ");
     scanf("%d %d",&row1,&col1);

     printf("\nEnter rows & cols for second matrix: ");
     scanf("%d %d",&row2,&col2);

   }
   //Enter First matrix.
   printf("Enter FIRST matrix.\n");
   for(i=0;i<row1;i++)
   {
       for(j=0;j<col1;j++)
       {
           printf("A[%d][%d]=",i,j);
           scanf("%d",&A[i][j]);
       }
       printf("\n");
   }

      //Enter Second matrix.
      printf("Enter SECOND matrix.\n");

   for(i=0;i<row2;i++)
   {
       for(j=0;j<col2;j++)
       {
           printf("B[%d][%d]=",i,j);
           scanf("%d",&B[i][j]);
       }
       printf("\n");
   }

      //printing First matrix.
   printf("\nA=");
   for(i=0;i<row1;i++)
   {
       for(j=0;j<col1;j++)
       {
           printf("\t");
           printf("%d",A[i][j]);
       }
       printf("\n");
   }

      //printing Second matrix.
   printf("\nB=");
   for(i=0;i<row2;i++)
   {
       for(j=0;j<col2;j++)
       {
           printf("\t");
           printf("%d",B[i][j]);
       }
       printf("\n");
   }
}
