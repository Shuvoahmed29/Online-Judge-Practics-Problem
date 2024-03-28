#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,copy,len;
    gets(s);
    len=strlen(s);
    for(i=0; i<len; i=i+2)
    {
        for(j=i+2; j<len; j=j+2)
        {
            if(s[i]>s[j])
            {
                copy=s[i];
                s[i]=s[j];
                s[j]=copy;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}

