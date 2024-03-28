#include<stdio.h>
int main()
{
    int X;
    float Y,speed;
    scanf("%d %f",&X,&Y);
    speed=(X/Y);
    printf("%0.3f km/l\n",speed);
    return 0;
}
