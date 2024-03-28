//3. Write a C program to find out second smallest element of an unsorted   array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("How many number :  ");
    scanf("%d",&n);
    int A[n],B[n-1],j=0;
    printf("Enter %d Element : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    int min=A[0];
    for(i=1; i<n; i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(min!=A[i])
        {
            B[j]=A[i];
            j++;
        }
    }

    int secondmin=B[0];
    for(i=1; i<n-1; i++)
    {
        if(secondmin>B[i])
        {
            secondmin=B[i];
        }
    }
    printf("The Second smallest element of an unsorted   Array is = %d\n",secondmin);
    getch();
}

