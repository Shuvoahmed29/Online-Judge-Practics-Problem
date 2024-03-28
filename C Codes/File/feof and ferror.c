#include<stdio.h>
int main()
{
    FILE *fptr;
    char A[30];
    int n;
    fptr=fopen("Shuvo.txt","r");
    fscanf(fptr,"%s  %d",&A,&n);
    if(feof(fptr)!=0)
    {
        printf("End of File.\n");
    }
    if(ferror(fptr)==0)
    {
        printf("Reading...\n");
    }
    printf("Name : %s\n",A);
    printf("Roll : %d\n",n);
    fclose(fptr);
}

