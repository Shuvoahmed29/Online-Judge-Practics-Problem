#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];

    gets(ch);
    if(ch[0]>='A' && ch[0]<='Z')
    {
        ch[0]=ch[0];
    }
    else
    {
        ch[0]=ch[0]-32;
    }

    printf("%s\n",ch);
    return 0;
}

