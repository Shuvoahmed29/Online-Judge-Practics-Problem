/*POBLEM-01:-1D Array sortin in ASCENDING order.*/
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
