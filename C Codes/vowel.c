#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a word:   ");
    scanf("%c",&ch);
   printf("The ASCII valu of ch is %c\n  " );
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("The word is a vowel");
    }
    else
    {
        printf("The word is consonunt");
    }

    return 0;
}
