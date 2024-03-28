#include<stdio.h>
#include<string.h>
int main()
{
    char p[100];
    int len,i,k=0;
    gets(p);
    len=strlen(p);
    for(i=0; i<len; i++)
    {
        if(p[i]=='H' || p[i]=='Q'||p[i]=='9')
        {
            k=1;
        }
    }
    if(k==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
