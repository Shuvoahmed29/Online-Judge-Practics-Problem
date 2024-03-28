#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    gets(A);
    int i,len,s=0,b=0;
    len=strlen(A);
    for(i=0; i<len; i++)
    {
        if(A[i]>='a' && A[i]<='z')
        {
            s++;
        }
        else if(A[i]>='A' && A[i]<='Z')
        {
            b++;
        }
    }
    if(s>=b)
    {
        for(i=0; i<len; i++)
        {
            if(A[i]>='A' && A[i]<='Z')
            {
                A[i]=A[i]+32;
            }
        }
    }
    else
    {
        for(i=0; i<len; i++)
        {
            if(A[i]>='a' && A[i]<='z')
            {
                A[i]=A[i]-32;
            }
        }
    }
    printf("%s\n",A);
    return 0;
}
