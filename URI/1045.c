#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>=B+C)
    {
        printf(" NAO FORMA TRIANGULO\n");
    }
    else if(A*A==B*B+C)
    {
        printf("RIANGULO RETANGULO\n");
    }
    else if(A*A>B*B+C*C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(A*A<B*B+C*C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    A==B==C;
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    (A==B && A!=C);
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    (A==C && A!=B);
    {
        printf("TRIANGULO ISOSCELES\n");
    }
     (C==B && C!=A);
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;


}
