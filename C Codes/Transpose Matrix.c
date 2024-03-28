#include<stdio.h>
int main()
{
    int A[100][100],row,col,n,i,j;
    printf("Enter rows & cols: ");
    scanf("%d %d",&row,&col);
    //Enter A matrix.
    printf("\nEnter A matrix.\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
        printf("A[i][j]=");
        scanf("%d",&A[i][j]);
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

    //Transpose A matrix.
      printf("\nA'=");
    for(j=0;j<col;j++)
    {
        for(i=0;i<row;i++)
            {
                printf("\t");
                printf("%d",A[i][j]);

    }
    printf("\n");
    }

}
