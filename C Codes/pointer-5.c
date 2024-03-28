#include<stdio.h>
int swapping(int *p1,int *p2)
{
    int copy;
    copy=*p1;
    *p1=*p2;
    *p2=copy;

}
int main()
{
    int x=90,y=78;
    printf("Before Swapping\n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);
    swapping(&x,&y);
    printf("After Swapping\n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);
}
