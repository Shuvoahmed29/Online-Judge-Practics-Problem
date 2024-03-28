#include<stdio.h>
#include<string.h>
int main()
{
    char A[201];
    int i,len,w=0,u=0,b=0;
    gets(A);
    len=strlen(A);
    for(i=1;i<=len;i++)
    {
        if(A[i]=='W')
        {
            w++;
        }
        else if(A[i]=='U')
        {
            u++;
        }if(A[i]=='B')
        {
            b++;
        }
    }
}
