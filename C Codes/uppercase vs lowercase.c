#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:  ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("This character is lowercase",ch);
    }
    else if(ch>='A'&& ch<='Z')
    {
        printf("This character is uppercase",ch);
    }
    else
    {
        printf("This character is not Alphabet");
    }
    return 0;
}
