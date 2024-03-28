/*3.Write a C Program to Find the length of a string*/

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
    printf("The length of a string is : %d\n",len);
    getch();
}
