#include<stdio.h>
int main()
{
    int x,y,n,sum=0;
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        sum=0;

    }
    else if(x>y)
    {
        for(n=y+1; n<x; n++)
    {

        if(n%2!=0)
        {
          sum=sum+n;
        }

    }
    }
    else if(y>x)
    {
          for(n=x+1; n<y; n++)
    {

        if(n%2!=0)
        {
          sum=sum+n;
        }

    }
    }
    printf("%d\n",sum);

}
