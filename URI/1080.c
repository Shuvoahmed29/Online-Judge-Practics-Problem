#include<stdio.h>
int main()
{
    int N[100],i,n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&N[i]);
    }

    for(i=0;i<n;i++)
    {
        max=N[i];
      if(N[i+1]>max)
      {
          max=N[i+1];
          printf("%d\n",max);


      }
    }

}
