#include<stdio.h>
int main()
{
    int f=0,s=1,fibo,n,c=0;
    printf("N = ");
    scanf("%d",&n);
    while(c<n)
    {
       if(c<=1)
    {
        fibo=c;


    }
    else if(c>1)
    {
        fibo=f+s;
        f=s;
        s=fibo;


    }
      printf("%d ",fibo);
      c++;
    }

}
