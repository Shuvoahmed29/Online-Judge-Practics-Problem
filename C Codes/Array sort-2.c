#include<stdio.h>
int main()
{
    int A[1000],n,i,j,copy;
    printf("How many elements do you want : ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
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
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }
    printf("Ascending Order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}
