#include<stdio.h>
int main()
{

char sh;
printf("Enter char word=  ");
scanf("%c",&sh);
if(sh>='a' && sh<='z')
{
printf("%c is lower case\n",sh);

}
else if(sh>='A'  && sh<='Z')
{
printf("%c is upper case\n ",sh);
}
return 0;
}
