#include<stdio.h>
int main()
{
    FILE *fptr;
    long long int n,i;
    fptr=fopen("shuvo.txt","w");
    if(fptr==NULL)
    {
        printf("File dose not Exit.\n");
        exit(1);
    }
    else
    {
        printf("File Open Successfully.\n");
        for(i=1;i<=53;i++)
        {
            putw(i,fptr);
        }
    }
    fclose(fptr);
}
