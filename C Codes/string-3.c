#include<stdio.h>
int main()
{
    char s1[30];
    int i=0;
    printf("Enter your name : ");
    gets(s1);
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}
