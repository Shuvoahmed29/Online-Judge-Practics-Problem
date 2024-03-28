#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("Shuvo.txt","r");
    if(fptr==NULL)
    {
        printf("File dose not exit.\n");
        exit(1);
    }
    else
    {
        while((ch=fgetc(fptr))!=EOF)
        {

            printf("%c",ch);
        }
        fclose(fptr);
    }
}

