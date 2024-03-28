#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:  ");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("This character is Alphabet");
    }
    else
    {
        printf("This character is not Alphabet");
    }
    return 0;

}
