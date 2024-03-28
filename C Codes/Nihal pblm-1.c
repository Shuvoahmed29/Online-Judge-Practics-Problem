#include <stdio.h>
int main()
{
    double a,b;
    printf("Type a number ,it will make root of that\n: ");
    scanf("%lf",&a);
    b=sqrt(a);
    printf("%.1lf\n",b);
    return 0;
}
