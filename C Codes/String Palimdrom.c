#include<stdio.h>
#include<conio.h>
int main()
{
  char ch[30];
   printf("Enter your full name: ");
   gets(ch);
  int m= strlen(ch);
  printf("%d",m);
}
