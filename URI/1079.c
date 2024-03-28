#include<stdio.h>
int main()
{
    float n1,n2,n3,avg,sum;
    int N,i;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%f%f%f",&n1,&n2,&n3);
        sum=(n1*2)+(n2*3)+(n3*5);
        avg=sum/10;
        printf("%0.1f\n",avg);
    }



    return 0;



}
