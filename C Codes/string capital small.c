#include<stdio.h>
int main()
{
    int i,capital,small,digit,others,ch;
    char str[300];
    printf("Enter some word: ");
    gets(str);
    i=capital=small=digit=others=0;
    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            capital++;

          else if(ch>=97 && ch<=122)
            small++;
         else if(ch>=48 && ch<=57)
            digit++;
            else
                others++;



        i++;
    }
    printf("The capital number is : %d\n",capital);
    printf("The Small number is : %d\n",small);
    printf("The digit number is : %d\n",digit);
    printf("The others number is : %d\n",others);
}
