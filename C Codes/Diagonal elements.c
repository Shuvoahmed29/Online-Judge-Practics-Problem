#include<stdio.h>
int main()
{
    int A[100][100],i,j,sum=0,row,col;
    printf("Enter rows & cols number : ");
    scanf("%d %d",&row,&col);
    while(row!=col)
    {
        printf("ERROR!!!\nRow and col need to equal.\n");
        printf("Enter rows & cols number : ");
        scanf("%d %d",&row,&col);
    }
    printf("Enter the values of A matrix.\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("A[%d][%d] = ",i,j);
             scanf("%d",&A[i][j]);
        }

    }
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

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
                {
            printf("%d ",A[i][j]);
            sum=sum+A[i][j];
            }
        }


    }
    printf("The Diagonal value is : %d",sum);
}
