#include<stdio.h>
#include<conio.h>
int main()
{
    float x,a,b,c;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    a=(1+x)/2-1;b=(1+x)/2;c=(5*x-21)/2;
    printf("Box1 = %.1f\n",a);
    printf("Box2 = %.1f\n",b);
    printf("Box3 = %.1f\n",c);
    printf("Box4 = %.1f\n",a);
    getch();
}
