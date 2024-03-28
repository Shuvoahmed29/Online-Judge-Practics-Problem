#include<stdio.h>
int main()
{
    int x=10,y=40;
    int *p1,*p2,copy;
    p1=&x;
    p2=&y;
    copy=*p1;
    *p1=*p2;
    *p2=copy;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
