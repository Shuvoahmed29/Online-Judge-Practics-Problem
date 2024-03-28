#include<stdio.h>
int main()
{
    int N,r,i,p,q;
    scanf("%d",&N);
    if(N>=3600)
    {
        r=N/3600;
          p=N-(r*3600);

      i=p/60;
      q=p-(i*60);
      printf("%d:%d:%d\n",r,i,q);
    }
    else if(N<3600)
    {
        r=0;

      i=N/60;
      q=N-(i*60);
      printf("%d:%d:%d\n",r,i,q);
    }
     else if(N<60)
    {
        r=0;

      i=0;
      q=N;
      printf("%d:%d:%d\n",r,i,q);
    }

    return 0;
}
