#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s[100];
    int i,len=0;
    scanf("%s",s1);
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]=='h'||s1[i]=='e'||s1[i]=='l'||s1[i]=='l'||s1[i]=='o')
        {
            s[len]=s1[i];
            len++;
        }
    }
    if(s[0]=='h' && s[1]=='e' && s[2]=='l' && s[3]=='l' && s[4]=='o')
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
