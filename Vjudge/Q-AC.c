#include<stdio.h>
int main()
{
    char S[4];
    gets(S);
    int i,len,k=0,p=0;
    len=strlen(S);
    for(i=0;i<len;i++)
    {
        if(S[i]=='A'||S[i]=='B' || S[i]=='C')
        {
            k++;
        }
        else if(S[i]=='A'||S[i]=='R' || S[i]=='C')
        {
            p++;
        }
    }
    if(k==len) printf("ARC\n");
    else printf("ABC\n");
}
