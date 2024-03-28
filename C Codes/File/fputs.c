#include<stdio.h>
int main()
{
    FILE *fptr;
    char shuvo[70];
    fptr=fopen("Shuvo.txt","w");
    if(fptr==NULL)
    {
        printf("File dose not Exit.\n");
        exit(1);
    }
    else
    {
        printf("Enter your University Name : ");
        gets(shuvo);
        fputs(shuvo,fptr);
        fclose(fptr);
    }
}
