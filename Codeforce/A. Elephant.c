#include<stdio.h>
int main()
{
    int x,k=0,p;
    scanf("%d",&x);
    while(x>=5)
    {
        x=x-5;
        k++;
    }
     while(x>=4)
    {
        x=x-4;
        k++;
    }
    while(x>=3)
    {
        x=x-3;
        k++;
    }
     while(x>=2)
    {
        x=x-2;
        k++;
    }
    while(x>=1)
    {
        x=x-1;
        k++;
    }
    p=k;
    printf("%d\n",p);
    return 0;
}
