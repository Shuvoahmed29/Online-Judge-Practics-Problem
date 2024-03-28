#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100];
    gets(A);
    gets(B);
    //int len1,len2,i,j,k=0;
    strrev(A);
    int i=strcmp(B,A);
    if(i==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
