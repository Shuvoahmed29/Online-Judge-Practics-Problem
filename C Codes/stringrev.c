#include<stdio.h>
int main()
{
    char str1[30]="SHUVO AHMED";
    char str2[30];
    int len=0,i=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
}
