#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int len1,i;
    gets(a);
    len1=strlen(a);
    gets(b);
    for(i=0;i<len1;i++)
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    printf("\n");
    return 0;
}
