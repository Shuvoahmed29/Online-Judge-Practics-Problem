#include<stdio.h>
#include<string.h>
int main()
{
    char S[11],T[12],A[11];
    gets(S);
    gets(T);
    int lenS,lenT,i,d=0;
    lenS=strlen(S);
    lenT=strlen(T);
    lenT=lenT-1;
    for(i=0;i<lenT;i++)
    {
        A[i]=T[i];
    }
    for(i=0;i<lenS;i++)
    {
        if(S[i]==A[i])
        {
            d++;
        }
    }
    if(d==lenS) printf("Yes\n");
    else printf("No\n");

}
