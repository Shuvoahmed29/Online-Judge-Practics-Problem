#include<stdio.h>
int main()
{
    char s1[70000];
    printf("Enter Some word : ");
    gets(s1);
    int len=strlen(s1);
    printf("\nThe word number is = %d\n",len);
}
