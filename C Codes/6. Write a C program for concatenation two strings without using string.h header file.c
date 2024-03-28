#include<stdio.h>
int main()
{
    char A[10],B[10],C[20];
    int i,len,len1,len2,j=0;
    gets(A);
    gets(B);
    len1=strlen(A);
    len2=strlen(B);
    len=len1+len2;
    for(i=0;i<len1;i++)
    {
        C[i]=A[i];
    }
    C[len1]='\0';
    for(i=len1+1;i<=len;i++)
    {
        C[i]=B[j];
        j++;
    }
    for(i=0;i<=len;i++)
    {
        printf("%c",C[i]);
    }
    return 0;
}
