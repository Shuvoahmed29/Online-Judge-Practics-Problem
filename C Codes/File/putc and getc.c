#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("Shuvo.txt","w");
    if(fptr==NULL)
    {
        printf("File dose not exit.\n");
        exit(1);
    }
    else
    {
        printf("Enter your word.\n");
        while((ch=getchar())!=EOF)
        {
            fputc(ch,fptr);
        }
        fclose(fptr);
    }
}
