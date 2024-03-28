#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],i,j,sum=0;
    printf("How many rows and colum do u want for A matrix: ");
    scanf("%d",&A[10][10]);
    printf("How many rows and colum do u want for B matrix: ");
    scanf("%d",&B[10][10]);
    for(i=0;i<A[10][10];i++)
    {
        for(j=0;j<B[10][10];j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d %d",&i,&j);
        }
    }
}
