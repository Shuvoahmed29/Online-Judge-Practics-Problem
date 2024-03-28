#include<stdio.h>
#include<string.h>
int main()
{
    char A[20];
    gets(A);
    int i,len;
    len=strlen(A);
    for(i=0;i<len;i++)
    {
        if(A[i]==' ')
        {
            printf("%c",A[i+1]);
        }
    }
    return 0;
}
