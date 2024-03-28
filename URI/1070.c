#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    for(n=x; n<=x+12; n++)
    {


        if(n%2!=0)
        {
            printf("%d\n",n);
        }

    }
}

