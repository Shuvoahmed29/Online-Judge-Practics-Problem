#include<stdio.h>
int main()
{
    FILE *fptr;
    char A[40];
    int n;
    fptr=fopen("Shanto","w");
    printf("Enter your name : ");
    gets(A);
    printf("Enter your roll number : ");
    scanf("%d",&n);
    fprintf(fptr,"%s  %d",A,n);
    fclose(fptr);
}
