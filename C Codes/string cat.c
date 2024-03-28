#include<stdio.h>
int main()
{
    char s1[300],s2[300];
    printf("Enter your first word : ");
    gets(s1 );
    printf("\nEnter your second word :  ");
    gets(s2);
    strcat(s1,s2);
    printf("\nString cat is : %s\n",s1);
}
