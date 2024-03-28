#include<stdio.h>
int main()
{
    FILE *file;
    char A[10];
    char B[15];
    int C;
    file=fopen("Shuvo.txt","r");
    if(file==NULL)
    {
        printf("File dose not exit.\n");
    }
    else
    {
        printf("File is Created Successfully.\n");
        fscanf(file,"%s %s %d",&A,&B,&C);
        printf("%s %s %d",A,B,C);
        fclose(file);
    }
}


