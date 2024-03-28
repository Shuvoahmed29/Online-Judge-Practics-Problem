#include<stdio.h>
int main()
{
    FILE *fptr;
    long long int n;
    fptr=fopen("shuvo.txt","r");
    if(fptr==NULL)
    {
        printf("File dose not Exit.\n");
        exit(1);
    }
    else
    {
        n=getw(fptr);
        while(n!=EOF)
        {
            printf("%lld\n",n);
            n=getw(fptr);
        }
    }
    fclose(fptr);
}

