#include<stdio.h>
int main()
{
    FILE *fptr;
    char shuvo[70];
    fptr=fopen("Shuvo.txt","r");
    if(fptr==NULL)
    {
        printf("File dose not Exit.\n");
        exit(1);
    }
    else
    {
        while(!feof(fptr))
        {
         fgets(shuvo,60,fptr);
         printf("%s\n",shuvo);
        }
        fclose(fptr);
    }
}

