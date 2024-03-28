#include<stdio.h>
int main()
{
   char s1[200],s2[200];
   printf("Enter First string : ");
   gets(s1);
   printf("\nEnter Second string : ");
   gets(s2);
   int d;
   d=strcmp(s1,s2);
   if(d==0)
   {
       printf("First & Second String are Equal.");

   }
   else
   {
    printf("\nFirst & Second String are NOT Equal.\n");
   }
}
