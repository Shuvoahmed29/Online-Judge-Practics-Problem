#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[5];
    char C[6]={'h','e','l','l','o'};
    int value=0,len,k,i;
    gets(A);
    len = strlen(A);
    for(i=0;i<len;i++)
    {
        if(A[i]=='h')
        {
            k=i+1;
            B[0]=A[i];
            break;
        }
    }
     for(i=k;i<len;i++)
    {
        if(A[i]=='e')
        {
            k=i+1;
            B[1]=A[i];
            break;
        }
    }
     for(i=k;i<len;i++)
    {
        if(A[i]=='l')
        {
            k=i+1;
            B[2]=A[i];
            break;
        }
    }
     for(i=k;i<len;i++)
    {
        if(A[i]=='l')
        {
            k=i+1;
            B[3]=A[i];
            break;
        }
    }
     for(i=k;i<len;i++)
    {
        if(A[i]=='o')
        {
            k=i+1;
            B[4]=A[i];
            break;
        }
    }
    for(i=0;i<5;i++)
    {
        if(B[i]==C[i])
        {
            value++;
        }
    }
    if(value==5) printf("YES\n");
    else printf("NO\n");
    return 0;
}
