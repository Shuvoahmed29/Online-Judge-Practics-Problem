/*1. Write a C Program to Find the number of vowels, consonants, digits in a String.*/


#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10000];
    int i=0,v=0,d=0,c=0;
    printf("Enter a string : ");
    gets(str);
    int len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        v++;
    }
    else if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='0')
    {
        d++;
    }
    else
    {
        c++;
    }
    }
    printf("%d vowels\n",v);
    printf("%d Consonants\n",c);
    printf("%d Digits\n",d);
    getch();
}
