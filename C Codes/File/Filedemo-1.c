#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char A[20]="Shuvo Ahmed";
    int len=strlen(A);
    file=fopen("texts.txt","r");
    if(file==NULL)
    {
        printf("File dosen't Exit.\n");
    }
    else
    {
        printf("File is Created.\n");
        for(int i=0;i<len;i++)
        {
            fputc(A[i],file);
        }
        printf("File read successfully.\n");
        fclose(file);
    }
}
