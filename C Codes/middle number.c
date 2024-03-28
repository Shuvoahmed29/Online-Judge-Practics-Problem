#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter three number:   ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b>c)
    {
        printf("a is vary big number");
       // printf("b is middle number");
    }
    else if(b>a>c)
    {
        printf("b is vary big number");
       // printf("a is middle number");
    }
    else if(c>a>b)
    {
        printf("c is vary big number");
       // printf("a is middle number");
    }
    else if(a>c>b)
    {
        printf("a is vary big number");
      //  printf("c is middle number");
    }
    else if(b>c>a)
    {
        printf("b is vary big number");
       // printf("c is middle number");
    }
    else if(c>a>b)
    {
        printf("c is vary big number");
        //printf("a is middle number");
    }
    return 0;
}
