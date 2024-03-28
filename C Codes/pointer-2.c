#include<stdio.h>
int main()
{
    int x=9,y=4,z=10;
    int *p;
    p=&x;
    printf("x= %d\n",*p);
     p=&y;
    printf("y= %d\n",*p);
     p=&z;
    printf("z= %d\n",*p);
}
