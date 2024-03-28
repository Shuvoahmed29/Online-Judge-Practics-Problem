#include<stdio.h>
int main()
{
    int A[100],i,j,d,n;
    printf("Enter the elements of A : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=1;j--)
            d=A[i]>A[j];
    }
    printf("%d",A[j]);
}
