#include<stdio.h>
int main()
{
    int a[10 ^ 100000],b[10 ^ 9],c[10 ^ 9];
    gets(a);
    gets(b);
    c=a%b;
    printf("%s\n",c);
    return 0;
}
