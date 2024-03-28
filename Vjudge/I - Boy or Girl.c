#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],copy;
    gets(A);
    int len,i,j,k=0;
    len=strlen(A);

   for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(A[i]>A[j])
            {
                copy=A[i];
                A[i]=A[j];
                A[j]=copy;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        if(A[i]!=A[i+1])
        {
            k++;

        }
    }

    if(k%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}

