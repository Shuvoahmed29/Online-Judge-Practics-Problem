#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char A[70];
    file=fopen("texts.txt","w");
    if(file==NULL)
    {
        printf("File dose not Created Successfully.\n");
    }
    else
    {
        printf("File is Created Successfully.\n");
        printf("Enter your University Name : ");
        gets(A);
        fputs(A,file);
        fputs("\n",file);
        printf("File is written Successfully.\n");
        fclose(file);
    }
}
