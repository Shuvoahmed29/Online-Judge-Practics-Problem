#include<stdio.h>
#include<string.h>
int main()
{
    char A[101];
    gets(A);
    int len,i;
    len=strlen(A);
    for(int i=0; i<len; i++)
    {
        if(A[i]==',')
            printf("\n");
        else
            printf("%c",A[i]);
    }
    printf("\n");
    return 0;
}
