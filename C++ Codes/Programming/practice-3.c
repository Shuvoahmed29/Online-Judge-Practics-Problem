// 7. Write a C program to find the length of a string using pointer.
/*#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int *len = 0, p = 0, i = 0;
    len = &p;
    *len = 0;
    while (str[i] != '\0')
    {
        *len = *len + 1;
        i++;
    }
    printf("%d\n", *len);
}*/
#include <stdio.h>
int main()
{
    char A[30];
    int len, i;
    printf("Enter your name: ");
    gets(A);
    len = strlen(A);
    printf("%c", A[0]);
    for (i = 1; i < len; i++)
    {
        if (A[i] == ' ')
            printf(".%c", A[i + 1]);
    }
    return 0;
}