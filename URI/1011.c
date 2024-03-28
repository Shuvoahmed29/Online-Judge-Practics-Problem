#include<stdio.h>
int main()
{
    float R;
    double A;
    scanf("%f",&R);
    A=(4.0/3)*3.14159*(R*R*R);
    printf("VOLUME = %0.3lf\n",A);
    return 0;
}
