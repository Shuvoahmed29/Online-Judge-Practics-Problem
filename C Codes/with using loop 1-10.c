#include<stdio.h>
int pnum(int n);


int main()
{
    int n=1;
    pnum(n);
    return 0;
}
int pnum(int n)
{

    if(n<=100)
    {
        printf("%d\n",n);
        pnum(n+1);
    }
}
