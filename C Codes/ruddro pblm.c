#include<stdio.h>
int main()
{

     int N;
     printf("If you want SUM(1) of two matrix plz click :1\n");
     printf("If you want SUBSTRACTION(2) of two matrix plzz click :2\n");
     printf("If you want Multiplication(3) of two matrix plzz click :3\n");
     printf("Click 1 or 2 or 3 now : ");
     scanf("%d",&N);

     if(N==3)
     {
       int A[100][100],B[100][100],row1,row2,col1,col2,i,j,N;
     int sum=0,k,result[100][100];
     printf("Enter values for Multiplication\n");
     printf("Enter rows & cols number for first martrix:  ");
     scanf("%d %d",&row1,&col1);
     printf("Enter rows & cols number for second martrix:  ");
     scanf("%d %d",&row2,&col2);

    while(col1!=row2)
    {
        printf("\nERROR !!!\nFIRST matrix col & SECOND matrix row isn't equal.\n");

        printf("\nEnter FIRST matrix rows & cols number: ");
        scanf("%d %d",&row1,&col1);
        printf("\nEnter SECOND matrix rows & cols number: ");
        scanf("%d %d",&row2,&col2);
    }


    //Enter FIRST matrix.
    printf("\nEnter FIRST matrix.\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }



    //Enter SECOND matrix.
    printf("\nEnter SECOND matrix.\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Matrix Multiplication:-
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



    //printing FIRST matrix.
    printf("\nFIRST matrix\nA=");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
         printf("\t");
         printf("%d",A[i][j]);
        }
        printf("\n");
    }


     //printing SECOND matrix.
     printf("\nSECOND matrix\nB=");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
         printf("\t");
         printf("%d",B[i][j]);
        }
        printf("\n");
    }

    //printing matrix Multiplication.
     printf("\nMatrix Multiplication RESULT\nA*B=");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
         printf("\t");
         printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}


   else if(N==1)
    {


    int i,j,r,c;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter values for SUM\n");
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



   else if(N==2)
   {

    int i,j,r,c;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter values for SUBSTRACTION\n");
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
    //Subtraction A & B matrix
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          C[i][j]=A[i][j]-B[i][j];
        }

    }
     //printing C matrix
     printf("\nA-B=");
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
}










