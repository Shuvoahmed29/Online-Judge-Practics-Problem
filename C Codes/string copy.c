#include<stdio.h>
int main()
{
    char s1[300],t1[300];
    printf("Enter your word : ");
    gets(s1);
    strcpy(t1,s1);
    printf("\nSource string : %s\n",s1);
    printf("\nCopying string : %s\n",t1);
}
