#include<stdio.h>
int main()
{
    FILE *fptr;
    int n;
    fptr=fopen("Shuvo.txt","r");
    n=getw(fptr);
    while(n!=EOF)
    {
        printf("%d\n",n);
        n=getw(fptr);
    }
    fclose(fptr);
    return 0;
}

