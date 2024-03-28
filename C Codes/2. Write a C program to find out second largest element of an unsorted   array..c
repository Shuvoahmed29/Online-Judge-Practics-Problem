//2. Write a C program to find out second largest element of an unsorted   array.
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("How many numbers : ");
    scanf("%d",&n);
    int A[n],j=0,B[n-1],max,secmax;
    printf("Enter %d Element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(i=1;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(A[i]!=max)
        {
            B[j]=A[i];
            j++;
        }
    }
    secmax=B[0];
    for(i=1;i<n-1;i++)
    {
         if(secmax<B[i])
        {
            secmax=B[i];
        }
    }
    printf("The Second largest element is = %d\n",secmax);
    return 0;
}
