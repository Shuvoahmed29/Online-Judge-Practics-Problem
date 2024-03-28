#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s[100];
    int i,j=0,k,l,len=0;
    scanf("%s",s1);
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]=='h'||s1[i]=='e'||s1[i]=='l'||s1[i]=='o')
        {
            s[len]=s1[i];
            len++;
        }
    }
    if(len>=6 && strcmp(s,'hello')==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
