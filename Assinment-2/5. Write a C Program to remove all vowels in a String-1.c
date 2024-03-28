/*5. Write a C Program to remove all vowels in a String*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char str[500];
    printf("Enter a string : ");
    gets(str);
    int len=0,i=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        printf("");
    }
    else
    {
        printf("%c",str[i]);
    }
}
getch();
}
