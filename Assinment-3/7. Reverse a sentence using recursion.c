
#include<stdio.h>
#include<conio.h>
int main()
{

    printf("Enter a Sentence : ");

    sentence();
    getch();
}

void sentence()
{
    char c;
    scanf("%c",&c);
    if(c!='\0')
    {
        sentence();
        printf("%c",c);
    }
}
