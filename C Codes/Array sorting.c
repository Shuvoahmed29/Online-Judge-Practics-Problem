#include<stdio.h>
int main()
{
    int A[10],i,j,temp;
    printf("Enter elements : ");
    scanf("%d",&A[10]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(A[j]<A[i])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("Printing shorted Elements list\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",A[i]);
    }
}
