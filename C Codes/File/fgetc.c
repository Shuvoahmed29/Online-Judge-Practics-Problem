#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("texts.txt","r");
    if(file==NULL)
    {
        printf("File dose not exit.\n");
    }
    else
    {
        printf("File is Created Successfully.\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
}
