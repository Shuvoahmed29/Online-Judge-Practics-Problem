#include<stdio.h>
int main()
{
    int array1[10],array2[10],i,n;
    printf("Enter array number: ");
    scanf("%d",&n);
    printf("The value is: ");
    scanf("%d",&array1[10]);
    printf("Array1: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ,",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];

    }
    printf("Array2: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ,",array2[i]);
    }
}
