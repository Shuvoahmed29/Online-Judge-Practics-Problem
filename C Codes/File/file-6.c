#include<stdio.h>
int main()
{
    FILE*file;
    char A[300];
    char B[500];
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File is not open\n");

    }
    else
    {
        printf("File is open\n");
        printf("Enter your full name:  ");
        gets(A);
        printf("\nEnter your full Address:  ");
        gets(B);
        fputs(A,file);
        fputs("\n",file);
        fputs(B,file);
        printf("File is written Successfully\n");
        fclose(file);
    }
}
