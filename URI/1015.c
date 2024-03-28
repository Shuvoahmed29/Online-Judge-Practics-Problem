#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,d;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    d=pow((pow((x2-x1),2)+pow((y2-y1),2)),0.5);
    printf("%0.4lf\n",d);
    return 0;
}
