#include<stdio.h>
int main()
{
    int X,Y;
float Z;
    scanf("%d %d",&X,&Y);

   float ar[5]={4.00,4.50,5.00,2.00,1.50};
   Z=ar[X-1]*Y;
   printf("Total: R$ %0.2f\n",Z);
    return 0;
}
