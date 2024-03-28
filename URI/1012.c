#include<stdio.h>
int main()
{
    double A,B,C,a,b,c,d,e;
    scanf("%lf%lf%lf",&A,&B,&C);
    a=0.5*A*C;
    b=3.14159*(C*C);
    c=0.5*(A+B)*C;
    d=B*B;
    e=A*B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",a,b,c,d,e);
    return 0;
}
