#include<stdio.h>
int main()
{
    char n;
    printf("Enter a value:  ");
    scanf("%c ",&n);
    if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
    {
        printf("This is a alphabet");
    }
else
    {
        printf("This is a charactar");
    }


    return 0;
}
