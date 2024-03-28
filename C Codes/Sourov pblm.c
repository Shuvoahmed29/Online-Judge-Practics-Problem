#include<stdio.h>
#include<string.h>
int main()
{

    char str[10];
    gets(str);
    int i,len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='r')
        {
            printf("%c\n",str[i]);
            return 0;
        }
    }
}
