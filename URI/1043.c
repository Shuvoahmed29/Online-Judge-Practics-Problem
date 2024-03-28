#include<stdio.h>
int main()
{
    float A,B,C,X,Y;
    scanf("%f %f %f",&A,&B,&C);
    if((A+B)>C && (A+C)>B && (B+C)>A)
    {
        X=A+B+C;
        printf("Perimetro = %0.1f\n",X);
    }
    else
    {
         Y=(A+B)*C/2;
        printf("Area = %0.1f\n",Y);
    }
    return 0;
}
