#include<stdio.h>
int main()
{
    FILE *fptr;
    char A[40];
    int n;
    fptr=fopen("Shanto","r");

    fscanf(fptr,"%s  %d",&A,&n);
    printf("Name : %s\n",A);
    printf("Roll : %d\n",n);
    fclose(fptr);
}
