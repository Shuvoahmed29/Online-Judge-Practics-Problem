#include<stdio.h>
int main()
{
    FILE *fptr;
    char A[80];
    int n;
    fptr=fopen("Shuvo.txt","r+");
    fscanf(fptr,"%s ",&A);
    printf("File Contain : %s\n",A);
    fseek(fptr,8,SEEK_SET);

    fputs(" C Programming Language.",fptr);
    rewind(fptr);

    fscanf(fptr,"%s ",&A);
    printf("File Contain : %s\n",A);
    n=ftell(fptr);
    printf("Total Size of File : %d Bytes\n",n);
    fclose(fptr);
}
