#include<stdio.h>
int main()
{
   int a,b,c,d,hour,min;
   scanf("%d %d %d %d",&a,&b,&c,&d);

   if(c>a && d>b)
   {
       hour=c-a;
       min=d-b;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
   }
   else if(c>a && b>d)
   {
       c=c-1;
       d=d+60;
        hour=c-a;
       min=d-b;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
   }
   else if(c==a && b==d)
   {

       printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
   }
   else if(c==a && d>b)
   {
       hour=0;
       min=d-b;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
   }
    else if(c>a && d==b)
   {
       hour=c-a;
       min=0;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
   }
   return 0;
}
