#include<stdio.h>
int main()
{
    FILE *fptr;
    long long int n;
    char A[50];
    fptr=fopen("Shuvo.txt","r");

    fscanf(fptr,"%s %lld",&A,&n);
    printf("%s\n%lld",A,n);
    fclose(fptr);
}

