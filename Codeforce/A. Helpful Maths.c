#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int i,j,copy;
    scanf("%s",&S);
    int len=strlen(S);

    for(i=0;i<=len;i=i+2)
    {
        for(j=i+1;j<=len;j++)
        {
            if(S[i]>S[j])
            {
                copy=S[i];
                S[i]=S[j];
                S[j]=copy;
            }
        }

       printf("%c",S[i]);
    }


}
