#include<stdio.h>
int main()
{
    int i,*p;
    int a[5]={2,4,6,8,9};
    *p=a;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",(*p+i));
    }
    return 0;
}
