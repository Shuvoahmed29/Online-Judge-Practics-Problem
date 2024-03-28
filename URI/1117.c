#include<stdio.h>
int main()
{
    float n,sum=0.0;
    int k=0;
    while(k<2)
    {
        scanf("%f",&n);
        if(n<0 || n>10.0)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum=sum+n;
            k++;
        }
    }
    printf("media = %0.2f\n",sum/2);
    return 0;
}
