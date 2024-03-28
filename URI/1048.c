#include<stdio.h>
int main()
{
    float a;
    char c='%';
    scanf("%f",&a);
    if(a>0.00 && a<=400.00)
    {
        printf("Novo salario: %0.2f\n",a+(a*0.15));
        printf("Reajuste ganho: %0.2f\n",(a*15)/100);
        printf("Em percentual: %d %c\n",15,c);
    }
    else if(a>400.00 && a<=800.00)
    {
        printf("Novo salario: %0.2f\n",a+(a*0.12));
        printf("Reajuste ganho: %0.2f\n",(a*12)/100);
        printf("Em percentual: %d %c\n",12,c);
    }
     else if(a>800.00 && a<=1200.00)
    {
        printf("Novo salario: %0.2f\n",a+(a*0.10));
        printf("Reajuste ganho: %0.2f\n",(a*10)/100);
        printf("Em percentual: %d %c\n",10,c);
    }
     else if(a>1200.00 && a<=2000.00)
    {
        printf("Novo salario: %0.2f\n",a+(a*0.07));
        printf("Reajuste ganho: %0.2f\n",(a*7)/100);
        printf("Em percentual: %d %c\n",7,c);
    }
     else if(a>2000.00)
    {
        printf("Novo salario: %0.2f\n",a+(a*0.04));
        printf("Reajuste ganho: %0.2f\n",(a*4)/100);
        printf("Em percentual: %d %c\n",4,c);
    }
    return 0;

}

