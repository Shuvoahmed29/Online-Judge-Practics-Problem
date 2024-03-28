#include<stdio.h>
int main()
{
    char s1[300];
    int i=0,c=0;
    printf("Enter your word : ");
    gets(s1);
    while(s1[i]!='\0')
    {
        i++;
        c++;
    }
    printf("\n\nThe LENGTH of the word is %d\n",c);
}
