#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int len1,len2;
    len1=strlen(str1);
    len2=strlen(str2);
    printf("\n'%s' is '%d' chars long.\n",str1,len1);
    printf("'%s' is '%d' chars long.\n",str2,len2);

    int com;
    com=strcmp(str1,str2);
    if(com==0)
        printf("\nString are Equal.\n");
    else if(com>0)
        printf("\n'%s' is gather than '%s'.\n",str1,str2);
    else
        printf("\n'%s' is less than than '%s'.\n",str1,str2);

    strcat(str1,str2);
    printf("\n%s\n",str1);

    strcpy(str1,str2);
    printf("\n%s\n",str1);
    return 0;
}
