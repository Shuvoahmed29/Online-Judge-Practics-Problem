/*4.Write a C Program to Concatenate two strings*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char str2[100],str1[200];
    int len=0,i=0,j=0;
    printf("Enter First string :");
    gets(str1);
    printf("Enter Second string : ");
    gets(str2);
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
     while(str2[j]!='\0')
    {
       str1[len+j]=str2[j];
       j++;
    }
    printf("str1=%s\n",str1);

    getch();

}
