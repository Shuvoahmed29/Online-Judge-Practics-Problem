#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    A[0]=1;
    A[1]=1;
    for(i=2;i<n;i++)
    {
        A[i]=A[i-2]+A[i-1];
    }
    printf("%d",A[n-1]);
    for(i=n-2;i>=0;i--)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
    return 0;
}
