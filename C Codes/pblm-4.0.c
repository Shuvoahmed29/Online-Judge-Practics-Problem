#include<stdio.h>
int main()
{
    int A[300];
    int n,i,copy,j;
    printf("How many number do you want : ");
    scanf("%d",&n);
    printf("Enter %d number.\n",n);
    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }
    printf("Printing Ascending Order.\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",A[j]);
    }
}
