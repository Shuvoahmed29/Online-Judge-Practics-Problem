#include<stdio.h>
int main()
{
    int n,i=1,mult=1;
    printf("N=");
    scanf("%d",&n);


     while(i<=n)
     {
         mult=mult*i;
         i=i+2;
     }

   printf("mult = %d\n",mult);
}
