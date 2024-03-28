/*program of summation and average*/
#include<stdio.h>
main(){
    int a,b,c,sum;
    float avg;
    printf("Enter three integer value:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("\n The summation of three number are=%d",sum);
    scanf("\n Average of three number are=%2f",avg);
}
