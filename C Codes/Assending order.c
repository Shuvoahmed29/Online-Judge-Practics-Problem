#include<stdio.h>
int main()
{
    int A[100],temp,n,i,j;
    printf("How many elements do you want:");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {

       scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("Printing Assending Order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}
