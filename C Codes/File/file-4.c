#include<stdio.h>
int main()
{
    FILE*file;
    char A[500];
    file=fopen("test.txt","w");
    if(file=NULL)
    {
        printf("File is not open\n");
    }
    else
    {
        printf("File is open\n");
        printf("Enter your university name : ");
        gets(A);
        fputc(A,file);
        fclose(file);
        printf("File is open Successfully\n");
    }
}
