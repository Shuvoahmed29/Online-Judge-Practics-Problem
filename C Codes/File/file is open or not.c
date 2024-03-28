#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char A[30],file[10];
    printf("Enter your file name : ");
    scanf("%s",&file);
    fptr=fopen(file,"r");
    if(fptr==NULL)
    {
        printf("File dosen,t Exit.\n");
        exit(0);
    }
    fscanf(fptr,"%s",A);
    printf("%s\n",A);
    fclose(fptr);
}
