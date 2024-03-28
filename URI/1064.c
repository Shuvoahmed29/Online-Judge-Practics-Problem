#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,n6,sum,avg;
    int i=0;
    scanf("%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6);

    if(n1>0)
    {
        i++;
        sum=sum+n1;
    }
    if(n2>0)
    {
        i++;
         sum=sum+n2;
    }
    if(n3>0)
    {
        i++;
         sum=sum+n3;
    }
   if(n4>0)
    {
        i++;
         sum=sum+n4;
    }
    if(n5>0)
    {
        i++;
         sum=sum+n5;
    }
   if(n6>0)
    {
        i++;
         sum=sum+n6;
    }
    avg=sum/i;
    printf("%d valores positivos\n",i);
    printf("%0.1f\n",avg);
    return 0;
}

