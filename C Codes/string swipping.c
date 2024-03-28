#include<stdio.h>
int main()
{
    char str1[30]="Bangladesh";
    char str2[30]="India";
    char copy[30];
    printf("Before Swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    strcpy(copy,str1);
    strcpy(str1,str2);
    strcpy(str2,copy);
    printf("\n\nAfter Swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n\n",str2);
}
