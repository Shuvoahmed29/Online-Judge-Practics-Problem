/*Md Raihanul Haque(Roll-29)*/
/*POBLEM-01:-Array sorting in ASCENDING order.*/

#include<stdio.h>
int main()
{
    int A[1000],i,j,copy,n;
    printf("How many ELEMENTS do you want : ");
    scanf("%d",&n);
    printf("Enter %d elements : \n",n);
    for(i=0;i<n;i++)
    {

          scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[i]) //Use '>' for DESECENDING order.
            {
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }
    printf("\nPrinting ASCENDING order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}












/*PROBLEM-02:-2D-Array matrix Multiplication.*/


#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],row1,row2,col1,col2,i,j;
    int sum=0,k,result[100][100];

    printf("Enter FIRST matrix rows & cols number: ");
    scanf("%d %d",&row1,&col1);
    printf("\nEnter SECOND matrix rows & cols number: ");
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



