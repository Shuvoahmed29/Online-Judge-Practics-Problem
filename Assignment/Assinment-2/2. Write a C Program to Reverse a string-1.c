/*2. Write a C Program to Reverse a string*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char str[1000],e;
    int len=0,i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        len++;
    }

    for(i=len;i>=0;i--)
    {
        e=str[i];
        printf("%c",e);
    }
    getch();

}
