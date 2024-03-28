#include<stdio.h>
int main()
{
    char A[101];
    gets(A);
    int len,i;
    len=strlen(A);
    if(A[0]>='a'&& A[0]<='z')
    {
        A[0]=A[0]-32;
    }
    for(i=1;i<len;i++)
    {
        if(A[i]>='A' && A[i]<='Z')
        {
            A[i]=A[i]+32;
        }
    }
    printf("%s\n",A);
    return 0;
}
