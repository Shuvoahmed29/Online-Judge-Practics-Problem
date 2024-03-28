#include<stdio.h>
int main()
{
    FILE *file;
    char A[70];
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
            fgets(A,69,file);
            printf("%s\n",A);
        }
        fclose(file);
    }
}

