#include<stdio.h>
int main()
{
    int n,j,k=0,i;
    scanf("%d",&n);
    for(i=1;i<4*n;)
    {
      printf("%d %d %d PUM\n",i,i+1,i+2);
      i=i+4;
    }
    return 0;
}
