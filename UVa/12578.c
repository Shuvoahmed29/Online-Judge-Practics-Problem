#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l;
        scanf("%d", &l);
        double red = (3.14159265358979323846264 * l * l) / 25.0;
        double green = ((6 * l * l) / 10.0) - red;
        printf("%0.2lf %0.2lf\n", red, green);
    }
}