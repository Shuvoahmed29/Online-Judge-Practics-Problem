#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char A[1000];
    int i,j,copy,len;

    gets(A);
    len=strlen(A);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(A[i]=='+' || A[j]=='+')
            {
                break;
            }
            else if(A[i]>A[j])
            {
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }

    for(i=0;i<len;i++)
    {
        printf("%c+",A[i]);
    }
    printf("\b");
    getch();
}


