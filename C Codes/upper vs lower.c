#include<stdio.h>
int main()
{
    char shuvo;
    printf("Enter char word= ");
    scanf("%c",&shuvo);
    if(shuvo>='a' && shuvo<='z')
        {
            printf("%c is lower number\n\n\t\t",shuvo);
            }
                else if(shuvo>='A' && shuvo<='Z');
                    {
                    printf("%c,is upper case\n",shuvo);
                }
return 0;
}
